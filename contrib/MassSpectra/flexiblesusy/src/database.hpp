// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

#include "error.hpp"
#include <string>
#include <vector>
#include <Eigen/Core>

struct sqlite3;

namespace flexiblesusy {
namespace database {

class Database {
public:
   Database(const std::string& file_name);
   ~Database();

   /// insert a row of doubles into a table
   void insert(const std::string&, const std::vector<std::string>&, const Eigen::ArrayXd&);

   /// extract a row of doubles from a table
   Eigen::ArrayXd extract(const std::string&, long long);

private:
   typedef int (*TCallback)(void*, int, char**, char**);

   class DisabledSQLiteError : Error {
   public:
      explicit DisabledSQLiteError(std::string msg_) : msg(msg_) {}
      virtual ~DisabledSQLiteError() {}
      virtual std::string what() const { return msg; }
   private:
      std::string msg;
   };

   sqlite3* db; ///< pointer to database object

   sqlite3* open(const std::string&);
   void execute(const std::string&);
   void execute(const std::string&, TCallback, void*);
   template <typename T> void create_table(const std::string&, const std::vector<std::string>&);

   static int extract_callback(void*, int, char**, char**);
};

} // namespace database
} // namespace flexiblesusy

# check for ROOT.
find_package(ROOT)
if (NOT ROOT_FOUND)
  #phew, no ROOT.  Gotta kill ColliderBit, but them's the breaks.
  message("   Woot! Woot! No ROOT!")
  message("   Good for you, kid.  Sadly, that means no ColliderBit either for now.  Too bad, so sad.")
  set (itch "${itch}" "ColliderBit")
  set (EXCLUDE_DELPHES TRUE)
endif()


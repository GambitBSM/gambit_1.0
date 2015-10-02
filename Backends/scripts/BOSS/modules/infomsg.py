##################################
#                                #
#  Info message module for BOSS  #
#                                #
##################################


# ====== Module-level globals ========

# Set of currently active message types, used by the function clearInfoMessages.
active_msg_types = set()

# ====== END: Module-level globals ========



# ====== Info message base class ========

class InfoMessage(object):
    """Base class for BOSS info messages."""

    def __init__(self):
        global active_msg_types
        active_msg_types.add(self.__class__)


    def printMessage(self):
        """
        Print the info message of the child class
        and add the message tag to the list of
        tags done.
        """        
        if self.tag not in self.__class__.tags_done:
            self.__class__.tags_done.add(self.tag)
            # print '  INFO: ' + self.msg
            print '  - ' + self.msg

# ====== END: Info message base class ========



# ====== List of info message classes ========


class ClassNotLoadable(InfoMessage):

    msg = "The class '%s' is not loadable."
    tags_done = set()

    def __init__(self, tag, reason=''):
        self.tag = tag
        self.msg = self.__class__.msg % (tag)
        if bool(reason): self.msg += " (%s)" % reason
        InfoMessage.__init__(self)


class ClassAlreadyDone(InfoMessage):

    msg = "Class '%s' is already done."
    tags_done = set()

    def __init__(self, tag, reason=''):
        self.tag = tag
        self.msg = self.__class__.msg % (tag)
        if bool(reason): self.msg += " (%s)" % reason
        InfoMessage.__init__(self)


class ParentClassIgnored(InfoMessage):

    msg = "In class '%s', the parent class '%s' is ignored."
    tags_done = set()

    def __init__(self, tag, parent_class, reason=''):
        self.tag = tag
        self.msg = self.__class__.msg % (tag, parent_class)
        if bool(reason): self.msg += " (%s)" % reason
        InfoMessage.__init__(self)


class IgnoredFunction(InfoMessage):

    msg = "The function '%s' is ignored."
    tags_done = set()

    def __init__(self, tag, reason=''):
        self.tag = tag
        self.msg = self.__class__.msg % (tag)
        if bool(reason): self.msg += " (%s)" % reason
        InfoMessage.__init__(self)


class IgnoredMemberFunction(InfoMessage):

    msg = "The member function '%s' is ignored."
    tags_done = set()

    def __init__(self, tag, reason=''):
        self.tag = tag
        self.msg = self.__class__.msg % (tag)
        if bool(reason): self.msg += " (%s)" % reason
        InfoMessage.__init__(self)


class IgnoredMemberVariable(InfoMessage):

    msg = "The member variable '%s' is ignored."
    tags_done = set()

    def __init__(self, tag, reason=''):
        self.tag = tag
        self.msg = self.__class__.msg % (tag)
        if bool(reason): self.msg += " (%s)" % reason
        InfoMessage.__init__(self)


class NoIncludeStatementGenerated(InfoMessage):

    msg = "No header file include statement generated for the type '%s'."
    tags_done = set()

    def __init__(self, tag, reason=''):
        self.tag = tag
        self.msg = self.__class__.msg % (tag)
        if bool(reason): self.msg += " (%s)" % reason
        InfoMessage.__init__(self)


class TypeNotAccepted(InfoMessage):

    msg = "The type '%s' is not accepted."
    tags_done = set()

    def __init__(self, tag, reason=''):
        self.tag = tag
        self.msg = self.__class__.msg % (tag)
        if bool(reason): self.msg += " (%s)" % reason
        InfoMessage.__init__(self)


class NoFactoryFunctions(InfoMessage):

    msg = "No factory functions generated for class '%s'."
    tags_done = set()

    def __init__(self, tag, reason=''):
        self.tag = tag
        self.msg = self.__class__.msg % (tag)
        if bool(reason): self.msg += " (%s)" % reason
        InfoMessage.__init__(self)


class NoLoadedTypesEntry(InfoMessage):

    msg = "No entry in loaded_types.hpp generated for class '%s'."
    tags_done = set()

    def __init__(self, tag, reason=''):
        self.tag = tag
        self.msg = self.__class__.msg % (tag)
        if bool(reason): self.msg += " (%s)" % reason
        InfoMessage.__init__(self)


# ====== END: List of info message classes ========



# ====== clearInfoMessages ========

def clearInfoMessages():
    """
    Loop through all active message types and clear the class-wide
    set of tags done. This will allow the info message to be printed
    again for the given tag.
    """
    global active_msg_types

    for info_msg_type in active_msg_types:
        info_msg_type.tags_done.clear()
    
    active_msg_types.clear()

# ====== END: clearInfoMessages ========




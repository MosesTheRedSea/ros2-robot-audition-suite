# generated from rosidl_generator_py/resource/_idl.py.em
# with input from audition_msgs:srv/ProceedToNext.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProceedToNext_Request(type):
    """Metaclass of message 'ProceedToNext_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('audition_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'audition_msgs.srv.ProceedToNext_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__proceed_to_next__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__proceed_to_next__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__proceed_to_next__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__proceed_to_next__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__proceed_to_next__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProceedToNext_Request(metaclass=Metaclass_ProceedToNext_Request):
    """Message class 'ProceedToNext_Request'."""

    __slots__ = [
        '_proceed',
        '_operator_note',
    ]

    _fields_and_field_types = {
        'proceed': 'boolean',
        'operator_note': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.proceed = kwargs.get('proceed', bool())
        self.operator_note = kwargs.get('operator_note', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.proceed != other.proceed:
            return False
        if self.operator_note != other.operator_note:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def proceed(self):
        """Message field 'proceed'."""
        return self._proceed

    @proceed.setter
    def proceed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'proceed' field must be of type 'bool'"
        self._proceed = value

    @builtins.property
    def operator_note(self):
        """Message field 'operator_note'."""
        return self._operator_note

    @operator_note.setter
    def operator_note(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'operator_note' field must be of type 'str'"
        self._operator_note = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ProceedToNext_Response(type):
    """Metaclass of message 'ProceedToNext_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('audition_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'audition_msgs.srv.ProceedToNext_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__proceed_to_next__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__proceed_to_next__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__proceed_to_next__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__proceed_to_next__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__proceed_to_next__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProceedToNext_Response(metaclass=Metaclass_ProceedToNext_Response):
    """Message class 'ProceedToNext_Response'."""

    __slots__ = [
        '_accepted',
        '_next_waypoint_label',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'next_waypoint_label': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        self.next_waypoint_label = kwargs.get('next_waypoint_label', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.next_waypoint_label != other.next_waypoint_label:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def next_waypoint_label(self):
        """Message field 'next_waypoint_label'."""
        return self._next_waypoint_label

    @next_waypoint_label.setter
    def next_waypoint_label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'next_waypoint_label' field must be of type 'str'"
        self._next_waypoint_label = value


class Metaclass_ProceedToNext(type):
    """Metaclass of service 'ProceedToNext'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('audition_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'audition_msgs.srv.ProceedToNext')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__proceed_to_next

            from audition_msgs.srv import _proceed_to_next
            if _proceed_to_next.Metaclass_ProceedToNext_Request._TYPE_SUPPORT is None:
                _proceed_to_next.Metaclass_ProceedToNext_Request.__import_type_support__()
            if _proceed_to_next.Metaclass_ProceedToNext_Response._TYPE_SUPPORT is None:
                _proceed_to_next.Metaclass_ProceedToNext_Response.__import_type_support__()


class ProceedToNext(metaclass=Metaclass_ProceedToNext):
    from audition_msgs.srv._proceed_to_next import ProceedToNext_Request as Request
    from audition_msgs.srv._proceed_to_next import ProceedToNext_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

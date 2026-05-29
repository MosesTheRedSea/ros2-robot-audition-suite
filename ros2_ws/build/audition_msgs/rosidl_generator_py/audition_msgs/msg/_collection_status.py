# generated from rosidl_generator_py/resource/_idl.py.em
# with input from audition_msgs:msg/CollectionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CollectionStatus(type):
    """Metaclass of message 'CollectionStatus'."""

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
                'audition_msgs.msg.CollectionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__collection_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__collection_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__collection_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__collection_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__collection_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollectionStatus(metaclass=Metaclass_CollectionStatus):
    """Message class 'CollectionStatus'."""

    __slots__ = [
        '_header',
        '_current_waypoint_id',
        '_current_waypoint_label',
        '_state',
        '_recording',
        '_total_waypoints',
        '_completed_waypoints',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'current_waypoint_id': 'int32',
        'current_waypoint_label': 'string',
        'state': 'string',
        'recording': 'boolean',
        'total_waypoints': 'int32',
        'completed_waypoints': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.current_waypoint_id = kwargs.get('current_waypoint_id', int())
        self.current_waypoint_label = kwargs.get('current_waypoint_label', str())
        self.state = kwargs.get('state', str())
        self.recording = kwargs.get('recording', bool())
        self.total_waypoints = kwargs.get('total_waypoints', int())
        self.completed_waypoints = kwargs.get('completed_waypoints', int())

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
        if self.header != other.header:
            return False
        if self.current_waypoint_id != other.current_waypoint_id:
            return False
        if self.current_waypoint_label != other.current_waypoint_label:
            return False
        if self.state != other.state:
            return False
        if self.recording != other.recording:
            return False
        if self.total_waypoints != other.total_waypoints:
            return False
        if self.completed_waypoints != other.completed_waypoints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def current_waypoint_id(self):
        """Message field 'current_waypoint_id'."""
        return self._current_waypoint_id

    @current_waypoint_id.setter
    def current_waypoint_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_waypoint_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_waypoint_id' field must be an integer in [-2147483648, 2147483647]"
        self._current_waypoint_id = value

    @property
    def current_waypoint_label(self):
        """Message field 'current_waypoint_label'."""
        return self._current_waypoint_label

    @current_waypoint_label.setter
    def current_waypoint_label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_waypoint_label' field must be of type 'str'"
        self._current_waypoint_label = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @property
    def recording(self):
        """Message field 'recording'."""
        return self._recording

    @recording.setter
    def recording(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'recording' field must be of type 'bool'"
        self._recording = value

    @property
    def total_waypoints(self):
        """Message field 'total_waypoints'."""
        return self._total_waypoints

    @total_waypoints.setter
    def total_waypoints(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_waypoints' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_waypoints' field must be an integer in [-2147483648, 2147483647]"
        self._total_waypoints = value

    @property
    def completed_waypoints(self):
        """Message field 'completed_waypoints'."""
        return self._completed_waypoints

    @completed_waypoints.setter
    def completed_waypoints(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'completed_waypoints' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'completed_waypoints' field must be an integer in [-2147483648, 2147483647]"
        self._completed_waypoints = value

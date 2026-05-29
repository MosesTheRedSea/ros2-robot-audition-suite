# generated from rosidl_generator_py/resource/_idl.py.em
# with input from audition_msgs:action/CollectAtWaypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CollectAtWaypoint_Goal(type):
    """Metaclass of message 'CollectAtWaypoint_Goal'."""

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
                'audition_msgs.action.CollectAtWaypoint_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__collect_at_waypoint__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__collect_at_waypoint__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__collect_at_waypoint__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__collect_at_waypoint__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__collect_at_waypoint__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollectAtWaypoint_Goal(metaclass=Metaclass_CollectAtWaypoint_Goal):
    """Message class 'CollectAtWaypoint_Goal'."""

    __slots__ = [
        '_waypoint_id',
        '_waypoint_label',
        '_x',
        '_y',
        '_yaw',
    ]

    _fields_and_field_types = {
        'waypoint_id': 'int32',
        'waypoint_label': 'string',
        'x': 'double',
        'y': 'double',
        'yaw': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.waypoint_id = kwargs.get('waypoint_id', int())
        self.waypoint_label = kwargs.get('waypoint_label', str())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.yaw = kwargs.get('yaw', float())

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
        if self.waypoint_id != other.waypoint_id:
            return False
        if self.waypoint_label != other.waypoint_label:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.yaw != other.yaw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def waypoint_id(self):
        """Message field 'waypoint_id'."""
        return self._waypoint_id

    @waypoint_id.setter
    def waypoint_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'waypoint_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'waypoint_id' field must be an integer in [-2147483648, 2147483647]"
        self._waypoint_id = value

    @property
    def waypoint_label(self):
        """Message field 'waypoint_label'."""
        return self._waypoint_label

    @waypoint_label.setter
    def waypoint_label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'waypoint_label' field must be of type 'str'"
        self._waypoint_label = value

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
        self._yaw = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CollectAtWaypoint_Result(type):
    """Metaclass of message 'CollectAtWaypoint_Result'."""

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
                'audition_msgs.action.CollectAtWaypoint_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__collect_at_waypoint__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__collect_at_waypoint__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__collect_at_waypoint__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__collect_at_waypoint__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__collect_at_waypoint__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollectAtWaypoint_Result(metaclass=Metaclass_CollectAtWaypoint_Result):
    """Message class 'CollectAtWaypoint_Result'."""

    __slots__ = [
        '_success',
        '_message',
        '_bag_count',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'bag_count': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.bag_count = kwargs.get('bag_count', int())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.bag_count != other.bag_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @property
    def bag_count(self):
        """Message field 'bag_count'."""
        return self._bag_count

    @bag_count.setter
    def bag_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bag_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bag_count' field must be an integer in [-2147483648, 2147483647]"
        self._bag_count = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CollectAtWaypoint_Feedback(type):
    """Metaclass of message 'CollectAtWaypoint_Feedback'."""

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
                'audition_msgs.action.CollectAtWaypoint_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__collect_at_waypoint__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__collect_at_waypoint__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__collect_at_waypoint__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__collect_at_waypoint__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__collect_at_waypoint__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollectAtWaypoint_Feedback(metaclass=Metaclass_CollectAtWaypoint_Feedback):
    """Message class 'CollectAtWaypoint_Feedback'."""

    __slots__ = [
        '_current_state',
        '_progress',
    ]

    _fields_and_field_types = {
        'current_state': 'string',
        'progress': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_state = kwargs.get('current_state', str())
        self.progress = kwargs.get('progress', float())

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
        if self.current_state != other.current_state:
            return False
        if self.progress != other.progress:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def current_state(self):
        """Message field 'current_state'."""
        return self._current_state

    @current_state.setter
    def current_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_state' field must be of type 'str'"
        self._current_state = value

    @property
    def progress(self):
        """Message field 'progress'."""
        return self._progress

    @progress.setter
    def progress(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'progress' field must be of type 'float'"
        self._progress = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CollectAtWaypoint_SendGoal_Request(type):
    """Metaclass of message 'CollectAtWaypoint_SendGoal_Request'."""

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
                'audition_msgs.action.CollectAtWaypoint_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__collect_at_waypoint__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__collect_at_waypoint__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__collect_at_waypoint__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__collect_at_waypoint__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__collect_at_waypoint__send_goal__request

            from audition_msgs.action import CollectAtWaypoint
            if CollectAtWaypoint.Goal.__class__._TYPE_SUPPORT is None:
                CollectAtWaypoint.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollectAtWaypoint_SendGoal_Request(metaclass=Metaclass_CollectAtWaypoint_SendGoal_Request):
    """Message class 'CollectAtWaypoint_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'audition_msgs/CollectAtWaypoint_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['audition_msgs', 'action'], 'CollectAtWaypoint_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_Goal
        self.goal = kwargs.get('goal', CollectAtWaypoint_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_Goal
            assert \
                isinstance(value, CollectAtWaypoint_Goal), \
                "The 'goal' field must be a sub message of type 'CollectAtWaypoint_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CollectAtWaypoint_SendGoal_Response(type):
    """Metaclass of message 'CollectAtWaypoint_SendGoal_Response'."""

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
                'audition_msgs.action.CollectAtWaypoint_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__collect_at_waypoint__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__collect_at_waypoint__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__collect_at_waypoint__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__collect_at_waypoint__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__collect_at_waypoint__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollectAtWaypoint_SendGoal_Response(metaclass=Metaclass_CollectAtWaypoint_SendGoal_Response):
    """Message class 'CollectAtWaypoint_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_CollectAtWaypoint_SendGoal(type):
    """Metaclass of service 'CollectAtWaypoint_SendGoal'."""

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
                'audition_msgs.action.CollectAtWaypoint_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__collect_at_waypoint__send_goal

            from audition_msgs.action import _collect_at_waypoint
            if _collect_at_waypoint.Metaclass_CollectAtWaypoint_SendGoal_Request._TYPE_SUPPORT is None:
                _collect_at_waypoint.Metaclass_CollectAtWaypoint_SendGoal_Request.__import_type_support__()
            if _collect_at_waypoint.Metaclass_CollectAtWaypoint_SendGoal_Response._TYPE_SUPPORT is None:
                _collect_at_waypoint.Metaclass_CollectAtWaypoint_SendGoal_Response.__import_type_support__()


class CollectAtWaypoint_SendGoal(metaclass=Metaclass_CollectAtWaypoint_SendGoal):
    from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_SendGoal_Request as Request
    from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CollectAtWaypoint_GetResult_Request(type):
    """Metaclass of message 'CollectAtWaypoint_GetResult_Request'."""

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
                'audition_msgs.action.CollectAtWaypoint_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__collect_at_waypoint__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__collect_at_waypoint__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__collect_at_waypoint__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__collect_at_waypoint__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__collect_at_waypoint__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollectAtWaypoint_GetResult_Request(metaclass=Metaclass_CollectAtWaypoint_GetResult_Request):
    """Message class 'CollectAtWaypoint_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CollectAtWaypoint_GetResult_Response(type):
    """Metaclass of message 'CollectAtWaypoint_GetResult_Response'."""

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
                'audition_msgs.action.CollectAtWaypoint_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__collect_at_waypoint__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__collect_at_waypoint__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__collect_at_waypoint__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__collect_at_waypoint__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__collect_at_waypoint__get_result__response

            from audition_msgs.action import CollectAtWaypoint
            if CollectAtWaypoint.Result.__class__._TYPE_SUPPORT is None:
                CollectAtWaypoint.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollectAtWaypoint_GetResult_Response(metaclass=Metaclass_CollectAtWaypoint_GetResult_Response):
    """Message class 'CollectAtWaypoint_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'audition_msgs/CollectAtWaypoint_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['audition_msgs', 'action'], 'CollectAtWaypoint_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_Result
        self.result = kwargs.get('result', CollectAtWaypoint_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_Result
            assert \
                isinstance(value, CollectAtWaypoint_Result), \
                "The 'result' field must be a sub message of type 'CollectAtWaypoint_Result'"
        self._result = value


class Metaclass_CollectAtWaypoint_GetResult(type):
    """Metaclass of service 'CollectAtWaypoint_GetResult'."""

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
                'audition_msgs.action.CollectAtWaypoint_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__collect_at_waypoint__get_result

            from audition_msgs.action import _collect_at_waypoint
            if _collect_at_waypoint.Metaclass_CollectAtWaypoint_GetResult_Request._TYPE_SUPPORT is None:
                _collect_at_waypoint.Metaclass_CollectAtWaypoint_GetResult_Request.__import_type_support__()
            if _collect_at_waypoint.Metaclass_CollectAtWaypoint_GetResult_Response._TYPE_SUPPORT is None:
                _collect_at_waypoint.Metaclass_CollectAtWaypoint_GetResult_Response.__import_type_support__()


class CollectAtWaypoint_GetResult(metaclass=Metaclass_CollectAtWaypoint_GetResult):
    from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_GetResult_Request as Request
    from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CollectAtWaypoint_FeedbackMessage(type):
    """Metaclass of message 'CollectAtWaypoint_FeedbackMessage'."""

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
                'audition_msgs.action.CollectAtWaypoint_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__collect_at_waypoint__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__collect_at_waypoint__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__collect_at_waypoint__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__collect_at_waypoint__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__collect_at_waypoint__feedback_message

            from audition_msgs.action import CollectAtWaypoint
            if CollectAtWaypoint.Feedback.__class__._TYPE_SUPPORT is None:
                CollectAtWaypoint.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollectAtWaypoint_FeedbackMessage(metaclass=Metaclass_CollectAtWaypoint_FeedbackMessage):
    """Message class 'CollectAtWaypoint_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'audition_msgs/CollectAtWaypoint_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['audition_msgs', 'action'], 'CollectAtWaypoint_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_Feedback
        self.feedback = kwargs.get('feedback', CollectAtWaypoint_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_Feedback
            assert \
                isinstance(value, CollectAtWaypoint_Feedback), \
                "The 'feedback' field must be a sub message of type 'CollectAtWaypoint_Feedback'"
        self._feedback = value


class Metaclass_CollectAtWaypoint(type):
    """Metaclass of action 'CollectAtWaypoint'."""

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
                'audition_msgs.action.CollectAtWaypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__collect_at_waypoint

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from audition_msgs.action import _collect_at_waypoint
            if _collect_at_waypoint.Metaclass_CollectAtWaypoint_SendGoal._TYPE_SUPPORT is None:
                _collect_at_waypoint.Metaclass_CollectAtWaypoint_SendGoal.__import_type_support__()
            if _collect_at_waypoint.Metaclass_CollectAtWaypoint_GetResult._TYPE_SUPPORT is None:
                _collect_at_waypoint.Metaclass_CollectAtWaypoint_GetResult.__import_type_support__()
            if _collect_at_waypoint.Metaclass_CollectAtWaypoint_FeedbackMessage._TYPE_SUPPORT is None:
                _collect_at_waypoint.Metaclass_CollectAtWaypoint_FeedbackMessage.__import_type_support__()


class CollectAtWaypoint(metaclass=Metaclass_CollectAtWaypoint):

    # The goal message defined in the action definition.
    from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_Goal as Goal
    # The result message defined in the action definition.
    from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_Result as Result
    # The feedback message defined in the action definition.
    from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from audition_msgs.action._collect_at_waypoint import CollectAtWaypoint_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')

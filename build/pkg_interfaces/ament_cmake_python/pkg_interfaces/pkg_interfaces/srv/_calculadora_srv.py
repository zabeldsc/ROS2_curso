# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pkg_interfaces:srv/CalculadoraSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CalculadoraSrv_Request(type):
    """Metaclass of message 'CalculadoraSrv_Request'."""

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
            module = import_type_support('pkg_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pkg_interfaces.srv.CalculadoraSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calculadora_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calculadora_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calculadora_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calculadora_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calculadora_srv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CalculadoraSrv_Request(metaclass=Metaclass_CalculadoraSrv_Request):
    """Message class 'CalculadoraSrv_Request'."""

    __slots__ = [
        '_operando1',
        '_operando2',
        '_operador',
    ]

    _fields_and_field_types = {
        'operando1': 'double',
        'operando2': 'double',
        'operador': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.operando1 = kwargs.get('operando1', float())
        self.operando2 = kwargs.get('operando2', float())
        self.operador = kwargs.get('operador', str())

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
        if self.operando1 != other.operando1:
            return False
        if self.operando2 != other.operando2:
            return False
        if self.operador != other.operador:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def operando1(self):
        """Message field 'operando1'."""
        return self._operando1

    @operando1.setter
    def operando1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'operando1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'operando1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._operando1 = value

    @builtins.property
    def operando2(self):
        """Message field 'operando2'."""
        return self._operando2

    @operando2.setter
    def operando2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'operando2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'operando2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._operando2 = value

    @builtins.property
    def operador(self):
        """Message field 'operador'."""
        return self._operador

    @operador.setter
    def operador(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'operador' field must be of type 'str'"
        self._operador = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_CalculadoraSrv_Response(type):
    """Metaclass of message 'CalculadoraSrv_Response'."""

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
            module = import_type_support('pkg_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pkg_interfaces.srv.CalculadoraSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calculadora_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calculadora_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calculadora_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calculadora_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calculadora_srv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CalculadoraSrv_Response(metaclass=Metaclass_CalculadoraSrv_Response):
    """Message class 'CalculadoraSrv_Response'."""

    __slots__ = [
        '_resultado',
    ]

    _fields_and_field_types = {
        'resultado': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.resultado = kwargs.get('resultado', float())

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
        if self.resultado != other.resultado:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def resultado(self):
        """Message field 'resultado'."""
        return self._resultado

    @resultado.setter
    def resultado(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'resultado' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'resultado' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._resultado = value


class Metaclass_CalculadoraSrv(type):
    """Metaclass of service 'CalculadoraSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pkg_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pkg_interfaces.srv.CalculadoraSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__calculadora_srv

            from pkg_interfaces.srv import _calculadora_srv
            if _calculadora_srv.Metaclass_CalculadoraSrv_Request._TYPE_SUPPORT is None:
                _calculadora_srv.Metaclass_CalculadoraSrv_Request.__import_type_support__()
            if _calculadora_srv.Metaclass_CalculadoraSrv_Response._TYPE_SUPPORT is None:
                _calculadora_srv.Metaclass_CalculadoraSrv_Response.__import_type_support__()


class CalculadoraSrv(metaclass=Metaclass_CalculadoraSrv):
    from pkg_interfaces.srv._calculadora_srv import CalculadoraSrv_Request as Request
    from pkg_interfaces.srv._calculadora_srv import CalculadoraSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.12
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

from sys import version_info as _swig_python_version_info
if _swig_python_version_info >= (2, 7, 0):
    def swig_import_helper():
        import importlib
        pkg = __name__.rpartition('.')[0]
        mname = '.'.join((pkg, '_grafo')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_grafo')
    _grafo = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_grafo', [dirname(__file__)])
        except ImportError:
            import _grafo
            return _grafo
        try:
            _mod = imp.load_module('_grafo', fp, pathname, description)
        finally:
            if fp is not None:
                fp.close()
        return _mod
    _grafo = swig_import_helper()
    del swig_import_helper
else:
    import _grafo
del _swig_python_version_info

try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr(self, class_type, name):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    raise AttributeError("'%s' object has no attribute '%s'" % (class_type.__name__, name))


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except __builtin__.Exception:
    class _object:
        pass
    _newclass = 0

class Node(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Node, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Node, name)
    __repr__ = _swig_repr
    __swig_setmethods__["numero_conexiones"] = _grafo.Node_numero_conexiones_set
    __swig_getmethods__["numero_conexiones"] = _grafo.Node_numero_conexiones_get
    if _newclass:
        numero_conexiones = _swig_property(_grafo.Node_numero_conexiones_get, _grafo.Node_numero_conexiones_set)

    def __init__(self, arg2):
        this = _grafo.new_Node(arg2)
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this

    def Add_path(self, arg2, arg3):
        return _grafo.Node_Add_path(self, arg2, arg3)

    def GetId(self):
        return _grafo.Node_GetId(self)

    def GetConexiones(self):
        return _grafo.Node_GetConexiones(self)

    def GetNumber_of_conections(self):
        return _grafo.Node_GetNumber_of_conections(self)
    __swig_destroy__ = _grafo.delete_Node
    __del__ = lambda self: None
Node_swigregister = _grafo.Node_swigregister
Node_swigregister(Node)

class Grafo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Grafo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Grafo, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _grafo.new_Grafo(*args)
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this

    def add_arco(self, arg2, arg3, arg4):
        return _grafo.Grafo_add_arco(self, arg2, arg3, arg4)

    def add_nodo(self):
        return _grafo.Grafo_add_nodo(self)

    def hay_arco(self, arg2, arg3):
        return _grafo.Grafo_hay_arco(self, arg2, arg3)

    def hay_camino(self, arg2, arg3):
        return _grafo.Grafo_hay_camino(self, arg2, arg3)

    def GetNodo(self, arg2):
        return _grafo.Grafo_GetNodo(self, arg2)
    if _newclass:
        GetCantidad_nodos = staticmethod(_grafo.Grafo_GetCantidad_nodos)
    else:
        GetCantidad_nodos = _grafo.Grafo_GetCantidad_nodos

    def GetWeight(self, arg2, arg3):
        return _grafo.Grafo_GetWeight(self, arg2, arg3)
    __swig_destroy__ = _grafo.delete_Grafo
    __del__ = lambda self: None
Grafo_swigregister = _grafo.Grafo_swigregister
Grafo_swigregister(Grafo)

def Grafo_GetCantidad_nodos():
    return _grafo.Grafo_GetCantidad_nodos()
Grafo_GetCantidad_nodos = _grafo.Grafo_GetCantidad_nodos

# This file is compatible with both classic and new-style classes.


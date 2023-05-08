/*** Arat: ***/
PyObject * itemCreateItem(PyObject * poSelf, PyObject * poArgs)

/*** Altýnda bul: ***/
	if (!PyTuple_GetInteger(poArgs, 1, &iVirtualNumber))
		return Py_BadArgument();

/*** Altýna ekle: ***/
#ifdef SHOW_DROPPED_ITEM_INFORMATION
	int socket0;
	if (!PyTuple_GetInteger(poArgs, 2, &socket0))
		return Py_BadArgument();
	int socket1;
	if (!PyTuple_GetInteger(poArgs, 3, &socket1))
		return Py_BadArgument();
	int socket2;
	if (!PyTuple_GetInteger(poArgs, 4, &socket2))
		return Py_BadArgument();
	int count;
	if (!PyTuple_GetInteger(poArgs, 5, &count))
		return Py_BadArgument();
#endif


/*** Arat: ***/
CPythonItem::Instance().CreateItem(iVirtualID, iVirtualNumber, x, y, z, bDrop);

/*** Deðiþtir: ***/
#ifdef SHOW_DROPPED_ITEM_INFORMATION
	CPythonItem::Instance().CreateItem(iVirtualID, iVirtualNumber, socket0, socket1, socket2, count, x, y, z, bDrop);
#else
	CPythonItem::Instance().CreateItem(iVirtualID, iVirtualNumber, x, y, z, bDrop);
#endif
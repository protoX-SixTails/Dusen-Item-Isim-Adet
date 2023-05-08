/*** Arat: ***/
void	CreateItem(DWORD dwVirtualID, DWORD dwVirtualNumber, float x, float y, float z, bool bDrop=true);

/*** Deðiþtir: ***/
#ifdef SHOW_DROPPED_ITEM_INFORMATION
		void	CreateItem(DWORD dwVirtualID, DWORD dwVirtualNumber, long socket0, long socket1, long socket2, DWORD count, float x, float y, float z, bool bDrop=true);
#else
		void	CreateItem(DWORD dwVirtualID, DWORD dwVirtualNumber, float x, float y, float z, bool bDrop=true);
#endif
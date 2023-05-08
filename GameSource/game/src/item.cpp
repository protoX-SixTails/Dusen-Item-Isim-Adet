/*** Arat: ***/
void CItem::EncodeInsertPacket(LPENTITY ent)

/*** Altýnda bul: ***/
pack.dwVID		= m_dwVID;

/*** Altýna ekle: ***/
#ifdef SHOW_DROPPED_ITEM_INFORMATION
	for (int i = 0; i < ITEM_SOCKET_MAX_NUM; ++i)
		pack.alSockets[i] = m_alSockets[i];
	pack.count	= m_dwCount;
#endif
/*** Arat: ***/
bool CPythonNetworkStream::RecvItemGroundAddPacket()

/*** Alt�nda bul: ***/
packet_item_ground_add.dwVnum,

/*** Alt�na ekle: ***/
#ifdef SHOW_DROPPED_ITEM_INFORMATION
										packet_item_ground_add.alSockets[0],
										packet_item_ground_add.alSockets[1],
										packet_item_ground_add.alSockets[2],
										packet_item_ground_add.count,
#endif
/*** Ýnclude Ekle: ***/
#ifdef SHOW_DROPPED_ITEM_INFORMATION
#include "pythonskill.h"
#endif

/*** Arat: ***/

void CPythonItem::CreateItem(DWORD dwVirtualID, DWORD dwVirtualNumber, float x, float y, float z, bool bDrop)

/*** Deðiþtir: ***/

#ifdef SHOW_DROPPED_ITEM_INFORMATION
void CPythonItem::CreateItem(DWORD dwVirtualID, DWORD dwVirtualNumber, long socket0, long socket1, long socket2, DWORD count, float x, float y, float z, bool bDrop)
#else
void CPythonItem::CreateItem(DWORD dwVirtualID, DWORD dwVirtualNumber, float x, float y, float z, bool bDrop)
#endif

/*** Arat: ***/

	if (bDrop)
	{
		z = CPythonBackground::Instance().GetHeight(x, y) + 10.0f;

/*** Altýna Ekle: ***/

#ifdef SHOW_DROPPED_ITEM_INFORMATION
		if (pItemData->GetType() == CItemData::ITEM_TYPE_COSTUME && pItemData->GetSubType() == CItemData::COSTUME_WEAPON || pItemData->GetType() == CItemData::ITEM_TYPE_WEAPON && (pItemData->GetWeaponType() == CItemData::WEAPON_SWORD || pItemData->GetWeaponType() == CItemData::WEAPON_ARROW))
			bStabGround = true;
			
		if (pItemData->GetType() == CItemData::ITEM_TYPE_WEAPON && pItemData->GetWeaponType() == CItemData::WEAPON_ARROW)
			bStabGround = true;
#endif

/*** Arat: ***/
m_GroundItemInstanceMap.insert(TGroundItemInstanceMap::value_type(dwVirtualID, pGroundItemInstance));

/*** Altýna Ekle: ***/
#ifdef SHOW_DROPPED_ITEM_INFORMATION
	char szText[1024];
	const char* colorCode = "";

	if (pItemData->GetType() == 17)
	{
		CPythonSkill::SSkillData* c_pSkillData;
		if (CPythonSkill::Instance().GetSkillData(socket0, &c_pSkillData))
		{
			colorCode = "|cffffcc00";
			sprintf(szText, "%s%s %s", colorCode, c_pSkillData->strName.c_str(), pItemData->GetName());
		}
		else
		{
			colorCode = "";
			sprintf(szText, "%s", pItemData->GetName());
		}
	}
	else if (pItemData->GetType() == 23)
	{
		colorCode = "|cff00ced1";
		sprintf(szText, "%s%s", colorCode, pItemData->GetName());
	}
	else if (pItemData->GetType() == 1 || pItemData->GetType() == 2)
	{
		colorCode = "|cff98fb98";
		sprintf(szText, "%s%s", colorCode, pItemData->GetName());
	}
	else
	{
		sprintf(szText, "%s", pItemData->GetName());
	}

	if (count > 1)
	{
		size_t len = strlen(szText);
		sprintf(szText + len, "(%d)", count);
	}
#endif

/*** Arat: ***/
pItemData->GetName(),

/*** Deðiþtir: ***/
#ifdef SHOW_DROPPED_ITEM_INFORMATION
		szText,
#else
		pItemData->GetName(),
#endif

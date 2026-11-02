/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149074  Symbol: updateColor */

/* cocos2d::CCLayerColor::updateColor() */

void __thiscall cocos2d::CCLayerColor::updateColor(CCLayerColor *this)

{
  CCLayerColor CVar1;
  CCLayerColor CVar2;
  CCLayerColor CVar3;
  CCLayerColor CVar4;
  CCLayerColor *pCVar5;
  int iVar6;
  
  CVar1 = this[DAT_001490a4];
  CVar2 = this[0x14a];
  CVar3 = this[DAT_001490a8];
  CVar4 = this[0x148];
  pCVar5 = this + 0x138;
  iVar6 = 4;
  do {
    iVar6 = iVar6 + -1;
    *pCVar5 = CVar1;
    pCVar5[1] = CVar2;
    pCVar5[2] = CVar3;
    pCVar5[3] = CVar4;
    pCVar5 = pCVar5 + 4;
  } while (iVar6 != 0);
  return;
}



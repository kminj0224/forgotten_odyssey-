/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001418d0  Symbol: setColor */

/* cocos2d::CCAtlasNode::setColor(cocos2d::_ccColor3B const&) */

void __thiscall cocos2d::CCAtlasNode::setColor(CCAtlasNode *this,_ccColor3B *param_1)

{
  int iVar1;
  int iVar2;
  CCAtlasNode CVar3;
  CCAtlasNode *pCVar4;
  uint uVar5;
  
  this[0x114] = *(CCAtlasNode *)param_1;
  this[DAT_00141950] = *(CCAtlasNode *)((int)param_1 + 1);
  iVar2 = DAT_00141954;
  CVar3 = *(CCAtlasNode *)((int)param_1 + 2);
  this[0x116] = CVar3;
  iVar1 = DAT_00141950;
  this[iVar2] = this[0x114];
  this[0x12a] = this[iVar1];
  pCVar4 = this + DAT_00141958;
  *pCVar4 = CVar3;
  if (pCVar4[-0xf] != (CCAtlasNode)0x0) {
    uVar5 = (uint)(byte)this[0x128];
    CVar3 = (CCAtlasNode)__divsi3(uVar5 * *(byte *)param_1,0xff);
    this[DAT_00141954] = CVar3;
    CVar3 = (CCAtlasNode)__divsi3(uVar5 * *(byte *)((int)param_1 + 1),0xff);
    this[0x12a] = CVar3;
    CVar3 = (CCAtlasNode)__divsi3(uVar5 * *(byte *)((int)param_1 + 2),0xff);
    this[DAT_00141958] = CVar3;
  }
  return;
}



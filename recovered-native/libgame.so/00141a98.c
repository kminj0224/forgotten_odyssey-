/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141a98  Symbol: initWithTileFile */

/* cocos2d::CCAtlasNode::initWithTileFile(char const*, unsigned int, unsigned int, unsigned int) */

undefined8 __thiscall
cocos2d::CCAtlasNode::initWithTileFile
          (CCAtlasNode *this,char *param_1,uint param_2,uint param_3,uint param_4)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CCTextureAtlas *this_00;
  int iVar4;
  
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar3 = __floatunsisf(param_2);
  __mulsf3(uVar3,uVar2);
  uVar2 = __fixsfsi();
  *(undefined4 *)(this + 0x10c) = uVar2;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar3 = __floatunsisf(param_3);
  __mulsf3(uVar3,uVar2);
  uVar2 = __fixsfsi();
  *(undefined4 *)(this + 0x110) = uVar2;
  iVar4 = DAT_00141b50;
  this[0x128] = (CCAtlasNode)0xff;
  this[0x114] = (CCAtlasNode)0xff;
  this[0x115] = (CCAtlasNode)0xff;
  this[0x116] = (CCAtlasNode)0xff;
  this[iVar4] = (CCAtlasNode)0xff;
  iVar4 = DAT_00141b54;
  this[0x12a] = (CCAtlasNode)0xff;
  this[iVar4] = (CCAtlasNode)0xff;
  uVar2 = DAT_00141b58;
  this[0x11c] = (CCAtlasNode)0x1;
  *(undefined4 *)(this + 0x124) = uVar2;
  *(undefined4 *)(this + 0x120) = 1;
  this_00 = (CCTextureAtlas *)operator_new(0x34);
  CCTextureAtlas::CCTextureAtlas(this_00);
  *(CCTextureAtlas **)(this + 0x118) = this_00;
  CCTextureAtlas::initWithFile(this_00,param_1,param_4);
  iVar4 = *(int *)(this + 0x118);
  if (iVar4 != 0) {
    updateBlendFunc(this);
    updateOpacityModifyRGB(this);
    calculateMaxItems(this);
    *(uint *)(this + 300) = param_4;
  }
  else {
    (**(code **)(*(int *)this + 8))(this);
  }
  return CONCAT44(param_1,(uint)(iVar4 != 0));
}



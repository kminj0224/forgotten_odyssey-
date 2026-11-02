/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151c58  Symbol: initWithWidth */

/* cocos2d::CCRibbon::initWithWidth(float, char const*, float, cocos2d::_ccColor4B const&, float) */

undefined4 __thiscall
cocos2d::CCRibbon::initWithWidth
          (CCRibbon *this,float param_1,char *param_2,float param_3,_ccColor4B *param_4,
          float param_5)

{
  uint uVar1;
  int *piVar2;
  CCTextureCache *this_00;
  CCObject *this_01;
  undefined4 in_r3;
  int iVar3;
  undefined4 uVar4;
  void *in_stack_00000000;
  undefined4 in_stack_00000004;
  
  piVar2 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)piVar2);
  iVar3 = *(int *)(DAT_00151d58 + 0x151c7a);
  piVar2[5] = 0;
  iVar3 = iVar3 + 8;
  *piVar2 = iVar3;
  piVar2[6] = 0;
  piVar2[7] = 0;
  *(int **)(this + 0x114) = piVar2;
  piVar2 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)piVar2);
  piVar2[5] = 0;
  piVar2[6] = 0;
  *piVar2 = iVar3;
  piVar2[7] = 0;
  uVar1 = DAT_00151d5c;
  *(int **)(this + 0x118) = piVar2;
  piVar2 = (int *)operator_new(uVar1);
  CCObject::CCObject((CCObject *)piVar2);
  *piVar2 = *(int *)(DAT_00151d60 + 0x151cb6) + 8;
  *(CCObject *)((int)piVar2 + DAT_00151d64) = (CCObject)0x0;
  piVar2[0x290] = 0;
  *(undefined4 *)((int)piVar2 + DAT_00151d68) = 0;
  CCRibbonSegment::init((CCRibbonSegment *)piVar2);
  CCMutableArray<cocos2d::CCRibbonSegment*>::addObject
            (*(CCMutableArray<cocos2d::CCRibbonSegment*> **)(this + 0x114),(CCRibbonSegment *)piVar2
            );
  CCObject::release((CCObject *)piVar2);
  *(undefined4 *)(this + 0x104) = in_r3;
  memcpy(this + 0x110,in_stack_00000000,4);
  *(undefined4 *)(this + 0x13c) = in_stack_00000004;
  uVar4 = *(undefined4 *)(DAT_00151d6c + 0x151d00);
  *(undefined4 *)(this + 300) = *(undefined4 *)(DAT_00151d6c + 0x151cfc);
  *(undefined4 *)(this + 0x130) = uVar4;
  uVar4 = __mulsf3(param_2,0x3f000000);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x144) = uVar4;
  this[0x14c] = (CCRibbon)0x0;
  *(undefined4 *)(this + 0x108) = DAT_00151d70;
  *(undefined4 *)(this + 0x10c) = DAT_00151d74;
  this_00 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
  this_01 = (CCObject *)CCTextureCache::addImage(this_00,(char *)param_4);
  *(CCObject **)(this + 0x100) = this_01;
  if (this_01 != (CCObject *)0x0) {
    CCObject::retain(this_01);
  }
  CCTexture2D::setTexParameters(*(_ccTexParams **)(this + 0x100));
  return 1;
}



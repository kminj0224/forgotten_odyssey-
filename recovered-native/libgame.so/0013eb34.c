/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013eb34  Symbol: reverse */

/* cocos2d::CCAnimate::reverse() */

void __thiscall cocos2d::CCAnimate::reverse(CCAnimate *this)

{
  bool bVar1;
  int *this_00;
  CCObject *this_01;
  CCSpriteFrame *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  float fVar8;
  
  iVar4 = *(int *)(*(int *)(this + 0x2c) + 0x1c);
  iVar3 = *(int *)(iVar4 + 0x14);
  iVar5 = *(int *)(iVar4 + 0x18);
  this_00 = (int *)operator_new(0x20);
  fVar8 = (float)CCObject::CCObject((CCObject *)this_00);
  uVar6 = iVar5 - iVar3 >> 2;
  *this_00 = *(int *)(DAT_0013ebbc + 0x13eb56) + 8;
  this_00[5] = 0;
  this_00[6] = 0;
  this_00[7] = 0;
  if (uVar6 != 0) {
    fVar8 = (float)std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>::
                   reserve((vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>
                            *)(this_00 + 5),uVar6);
  }
  piVar7 = *(int **)(iVar4 + 0x18);
  if ((int)piVar7 - *(int *)(iVar4 + 0x14) >> 2 != 0) {
    while ((piVar7 != *(int **)(iVar4 + 0x14) && (piVar7 = piVar7 + -1, *piVar7 != 0))) {
      this_01 = (CCObject *)CCObject::copy();
      pCVar2 = (CCSpriteFrame *)CCObject::autorelease(this_01);
      fVar8 = (float)CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                               ((CCMutableArray<cocos2d::CCSpriteFrame*> *)this_00,pCVar2);
    }
  }
  bVar1 = (bool)CCAnimation::animationWithFrames((CCMutableArray *)this_00,fVar8);
  fVar8 = (float)CCObject::release((CCObject *)this_00);
  actionWithDuration(fVar8,*(CCAnimation **)(this + 0x20),bVar1);
  return;
}



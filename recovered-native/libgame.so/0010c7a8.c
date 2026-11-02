/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010c7a8  Symbol: Unit_init_layer */

/* Unit1::Unit_init_layer() */

Unit1 * __thiscall Unit1::Unit_init_layer(Unit1 *this)

{
  int iVar1;
  undefined4 *puVar2;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCAnimation *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CCSpriteFrame *pCVar6;
  CCActionInterval *this_01;
  CCAction *pCVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int *piVar10;
  CCMutableArray *pCVar11;
  CCAnimate *pCVar12;
  int iVar13;
  CCMutableArray **ppCVar14;
  code *pcVar15;
  char *pcVar16;
  CCMutableArray **ppCVar17;
  float extraout_s0;
  float extraout_s1;
  CCPoint aCStack_20 [12];
  
  puVar2 = (undefined4 *)operator_new(0x24);
  iVar13 = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  (**(code **)(*(int *)this + 0xac))(this,puVar2);
  puVar2[6] = 0x6e;
  puVar2[7] = 0x3f800000;
  do {
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
    iVar1 = iVar13 + 0x120;
    iVar13 = iVar13 + 4;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar1) = this_00;
  } while (iVar13 != 0x10);
  piVar10 = *(int **)(DAT_0010c99c + 0x10c7fc);
  *(undefined4 *)(this + 0x110) = 0;
  iVar13 = *piVar10;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  pCVar11 = *(CCMutableArray **)(this + 0x120);
  if (iVar13 - 1U < 3) {
    pcVar16 = (char *)(DAT_0010c9b4 + 0x10c87a);
    pcVar9 = (char *)(DAT_0010c9b8 + 0x10c87c);
    pCVar12 = (CCAnimate *)0x0;
    iVar13 = 7;
  }
  else {
    pcVar16 = (char *)(DAT_0010c9a0 + 0x10c81c);
    Unit_Lode(pcVar16,(char *)(DAT_0010c9a4 + 0x10c81e),1,7,(CCAnimate *)0x0,pCVar11,0);
    Unit_Lode(pcVar16,(char *)(DAT_0010c9a8 + 0x10c838),1,0xd,*(CCAnimate **)(this + 0x114),
              *(CCMutableArray **)(this + 0x124),0);
    Unit_Lode(pcVar16,(char *)(DAT_0010c9ac + 0x10c850),1,9,*(CCAnimate **)(this + 0x118),
              *(CCMutableArray **)(this + 0x128),0);
    pCVar12 = *(CCAnimate **)(this + 0x11c);
    pCVar11 = *(CCMutableArray **)(this + 300);
    pcVar9 = (char *)(DAT_0010c9b0 + 0x10c868);
    iVar13 = 8;
  }
  Unit_Lode(pcVar16,pcVar9,1,iVar13,pCVar12,pCVar11,0);
  iVar13 = 0;
  ppCVar14 = (CCMutableArray **)(this + 0x120);
  uVar5 = DAT_0010c9bc;
  while( true ) {
    pCVar3 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames(*ppCVar14);
    pCVar11 = (CCMutableArray *)cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    ppCVar14[-4] = pCVar11;
    ppCVar17 = ppCVar14 + 1;
    iVar13 = iVar13 + 1;
    uVar4 = __floatunsisf(*(int *)(*ppCVar14 + 0x18) - *(int *)(*ppCVar14 + 0x14) >> 2);
    uVar5 = __mulsf3(uVar4,uVar5);
    *(undefined4 *)(pCVar11 + 0x20) = uVar5;
    cocos2d::CCObject::retain((CCObject *)ppCVar14[-4]);
    if (iVar13 == 4) break;
    ppCVar14 = ppCVar17;
    uVar5 = DAT_0010c9c4;
    if (iVar13 == 1) {
      uVar5 = DAT_0010c9c0;
    }
  }
  if (*piVar10 == 1) {
    pCVar6 = (CCSpriteFrame *)FUN_0010a482(*(undefined4 *)(this + 0x120));
    piVar10 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
    pcVar15 = *(code **)(*piVar10 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
    (*pcVar15)(piVar10,aCStack_20);
    if (*(char *)(**(int **)(DAT_0010c9c8 + 0x10c90a) + **(int **)(DAT_0010c9cc + 0x10c912) * 9 +
                 DAT_0010c9d0) == '\0') {
      (**(code **)(*piVar10 + 0xf4))(piVar10);
    }
    (**(code **)(*(int *)this + 0xcc))(this,piVar10,1,1);
    this_01 = (CCActionInterval *)cocos2d::CCObject::copy();
    pCVar7 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this_01);
    cocos2d::CCNode::runAction((CCNode *)piVar10,pCVar7);
    cocos2d::CCObject::release((CCObject *)this_01);
  }
  pCVar6 = (CCSpriteFrame *)FUN_0010a482(*(undefined4 *)(this + 0x120));
  piVar10 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
  puVar8 = (undefined4 *)(**(code **)(*piVar10 + 0x7c))();
  uVar5 = __fixsfsi(*puVar8);
  puVar2[2] = uVar5;
  iVar13 = (**(code **)(*piVar10 + 0x7c))(piVar10);
  uVar5 = __fixsfsi(*(undefined4 *)(iVar13 + 4));
  puVar2[3] = uVar5;
  return this;
}



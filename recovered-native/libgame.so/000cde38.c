/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cde38  Symbol: FileLode */

/* StageSelect::FileLode() */

void __thiscall StageSelect::FileLode(StageSelect *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCNode *pCVar7;
  CCSpriteFrameCache *this_00;
  CCSpriteFrame *pCVar8;
  CCAnimation *pCVar9;
  CCActionInterval *pCVar10;
  CCAction *pCVar11;
  char *__format;
  int iVar12;
  code *pcVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  float extraout_s0;
  undefined8 uVar17;
  float extraout_s1;
  int local_138;
  CCPoint local_124;
  int local_120;
  CCPoint local_11c;
  CCPoint local_118;
  int local_114;
  int local_110;
  CCPoint local_10c;
  int local_108;
  CCPoint aCStack_104 [8];
  CCPoint local_fc;
  int local_f8;
  CCPoint aCStack_f4 [8];
  CCPoint local_ec;
  CCPoint local_e8;
  int local_e4;
  int local_e0;
  CCPoint local_dc;
  int local_d8;
  CCPoint aCStack_d4 [8];
  CCPoint local_cc;
  int local_c8;
  CCPoint aCStack_c4 [8];
  CCPoint local_bc;
  int local_b8;
  CCPoint aCStack_b4 [8];
  CCPoint local_ac;
  int local_a8;
  CCPoint aCStack_a4 [8];
  CCPoint aCStack_9c [8];
  char acStack_94 [20];
  char acStack_80 [100];
  int local_1c;
  
  iVar16 = DAT_000cde6c + 0xcde44;
  piVar14 = *(int **)(iVar16 + DAT_000cde70);
  local_1c = *piVar14;
  memset(acStack_80,0,100);
  iVar12 = **(int **)(iVar16 + DAT_000cde74);
  if (iVar12 == 9) {
    iVar12 = 8;
    __format = &UNK_000cde6a + DAT_000cde78;
  }
  else {
    __format = (char *)(DAT_000ce264 + 0xcde84);
  }
  sprintf(acStack_80,__format,iVar12);
  puVar15 = *(undefined4 **)(iVar16 + DAT_000ce268);
  __mulsf3(*puVar15,0x3f000000);
  uVar17 = __mulsf3(puVar15[1],0x3f000000);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_124,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  vDrawImage((CCNode *)this,acStack_80,local_124,local_120,0);
  uVar17 = __subsf3(puVar15[1],0x40000000);
  uVar17 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_11c,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_114,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  uVar17 = vDrawFrame((CCNode *)this,(char *)(DAT_000ce26c + 0xcdeea),local_11c,local_118,local_114,
                      local_110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_10c,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000ce274 + 0xcdf0e),local_10c,local_108,8);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,8);
  pcVar13 = *(code **)(*piVar2 + 0x3c);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,8);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  __mulsf3(*puVar4,0x3f000000);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,8);
  iVar12 = (**(code **)(*piVar3 + 0x7c))();
  uVar17 = __mulsf3(*(undefined4 *)(iVar12 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_104,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar13)(piVar2,aCStack_104);
  uVar17 = __subsf3(*puVar15,DAT_000ce270);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_fc,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000ce278 + 0xcdf86),local_fc,local_f8,9);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,9);
  uVar5 = *puVar15;
  pcVar13 = *(code **)(*piVar2 + 0x3c);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,8);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar6 = __mulsf3(*puVar4,0x3f000000);
  __subsf3(uVar5,uVar6);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,8);
  iVar12 = (**(code **)(*piVar3 + 0x7c))();
  uVar17 = __mulsf3(*(undefined4 *)(iVar12 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_f4,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar13)(piVar2,aCStack_f4);
  uVar17 = __subsf3(puVar15[1],0x41000000);
  uVar17 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_ec,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_e4,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000ce27c + 0xce020),local_ec,local_e8,local_e4,local_e0);
  uVar17 = __subsf3(*puVar15,DAT_000ce270);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_dc,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000ce280 + 0xce04c),local_dc,local_d8,0xe);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
  pcVar13 = *(code **)(*piVar2 + 0x3c);
  uVar6 = *puVar15;
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar5 = __mulsf3(*puVar4,0x3f000000);
  uVar5 = __subsf3(uVar6,uVar5);
  __subsf3(uVar5,0x40800000);
  uVar5 = puVar15[1];
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
  iVar12 = (**(code **)(*piVar3 + 0x7c))();
  uVar6 = __mulsf3(*(undefined4 *)(iVar12 + 4),0x3f000000);
  uVar5 = __subsf3(uVar5,uVar6);
  uVar17 = __subsf3(uVar5,0x41000000);
  cocos2d::CCPoint::CCPoint(aCStack_d4,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar13)(piVar2,aCStack_d4);
  uVar17 = __subsf3(*puVar15,DAT_000ce270);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_cc,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000ce284 + 0xce0ec),local_cc,local_c8,0xd);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  uVar5 = *puVar15;
  pcVar13 = *(code **)(*piVar2 + 0x3c);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar6 = __mulsf3(*puVar4,0x3f000000);
  uVar5 = __subsf3(uVar5,uVar6);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar5 = __subsf3(uVar5,*puVar4);
  __subsf3(uVar5,0x41000000);
  uVar6 = puVar15[1];
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  iVar12 = (**(code **)(*piVar3 + 0x7c))();
  uVar5 = __mulsf3(*(undefined4 *)(iVar12 + 4),0x3f000000);
  uVar5 = __subsf3(uVar6,uVar5);
  uVar17 = __subsf3(uVar5,0x41000000);
  cocos2d::CCPoint::CCPoint(aCStack_c4,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar13)(piVar2,aCStack_c4);
  uVar17 = __subsf3(*puVar15,DAT_000ce270);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_bc,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000ce288 + 0xce1a8),local_bc,local_b8,0xb);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
  uVar5 = *puVar15;
  pcVar13 = *(code **)(*piVar2 + 0x3c);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar6 = __mulsf3(*puVar4,0x3f000000);
  uVar5 = __subsf3(uVar5,uVar6);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar5 = __subsf3(uVar5,*puVar4);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar5 = __subsf3(uVar5,*puVar4);
  __subsf3(uVar5,DAT_000ce28c);
  uVar6 = puVar15[1];
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
  iVar12 = (**(code **)(*piVar3 + 0x7c))();
  uVar5 = __mulsf3(*(undefined4 *)(iVar12 + 4),0x3f000000);
  uVar5 = __subsf3(uVar6,uVar5);
  uVar17 = __subsf3(uVar5,0x41000000);
  cocos2d::CCPoint::CCPoint(aCStack_b4,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar13)(piVar2,aCStack_b4);
  uVar17 = __subsf3(*puVar15,DAT_000ce490);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_ac,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  vDrawImage((CCNode *)this,(char *)(DAT_000ce494 + 0xce2aa),local_ac,local_a8,0xf);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xf);
  uVar5 = *puVar15;
  pcVar13 = *(code **)(*piVar2 + 0x3c);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xf);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar6 = __mulsf3(*puVar4,0x3f000000);
  uVar5 = __subsf3(uVar5,uVar6);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar5 = __subsf3(uVar5,*puVar4);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xf);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar5 = __subsf3(uVar5,*puVar4);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xf);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  __subsf3(uVar5,*puVar4);
  uVar6 = puVar15[1];
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xf);
  iVar12 = (**(code **)(*piVar3 + 0x7c))();
  uVar5 = __mulsf3(*(undefined4 *)(iVar12 + 4),0x3f000000);
  uVar5 = __subsf3(uVar6,uVar5);
  uVar17 = __subsf3(uVar5,0x41000000);
  cocos2d::CCPoint::CCPoint(aCStack_a4,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar13)(piVar2,aCStack_a4);
  iVar12 = 0;
  do {
    if (*(int *)(**(int **)(iVar16 + DAT_000ce498) + **(int **)(iVar16 + DAT_000ce49c) * 0x24 +
                 iVar12 + 0x2440) != 0) {
      pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
      set_Icon_New(pCVar7,0,0);
      break;
    }
    iVar12 = iVar12 + 4;
  } while (iVar12 != 0x24);
  piVar2 = (int *)operator_new(0x20);
  cocos2d::CCObject::CCObject((CCObject *)piVar2);
  iVar1 = DAT_000ce4a8;
  iVar12 = DAT_000ce4a4;
  local_138 = 1;
  *piVar2 = *(int *)(iVar16 + DAT_000ce4a0) + 8;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  do {
    sprintf(acStack_94,(char *)(iVar1 + 0xce3d6),iVar12 + 0xce3d8,local_138);
    this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar8 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(this_00,acStack_94);
    if (pCVar8 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar2,pCVar8);
    }
    local_138 = local_138 + 1;
  } while (local_138 != 9);
  pCVar9 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)piVar2);
  pCVar10 = (CCActionInterval *)cocos2d::CCAnimate::actionWithAnimation(pCVar9);
  uVar17 = __floatunsidf(piVar2[6] - piVar2[5] >> 2);
  __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000ce488,DAT_000ce48c);
  uVar5 = __truncdfsf2();
  *(undefined4 *)(pCVar10 + 0x20) = uVar5;
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeAllObjects
            ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar2,true);
  cocos2d::CCObject::release((CCObject *)piVar2);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_000ce4ac + 0xce43a));
  pcVar13 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_9c,extraout_s0,extraout_s1);
  (*pcVar13)(piVar2,aCStack_9c);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar2,0x10,0x10);
  pCVar11 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar10);
  cocos2d::CCNode::runAction((CCNode *)piVar2,pCVar11);
  if (local_1c != *piVar14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



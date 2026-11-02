/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e6d3c  Symbol: vMainProc */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000e7090) */
/* WARNING (jumptable): Removing unreachable block (ram,0x000e6d70) */
/* WARNING: Removing unreachable block (ram,0x000e7090) */
/* WARNING: Removing unreachable block (ram,0x000e6d70) */
/* MarketLayer::vMainProc(float) */

void MarketLayer::vMainProc(float param_1)

{
  int *in_r0;
  CCNode *pCVar1;
  int *piVar2;
  CCSpriteFrameCache *pCVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  char acStack_3c [32];
  int local_1c;
  
  iVar7 = DAT_000e709c + 0xe6d48;
  piVar6 = *(int **)(iVar7 + DAT_000e70a0);
  local_1c = *piVar6;
  if (*(CCNode *)(in_r0 + 0x48) != (CCNode)0x0) {
    removeChildLayer();
    uVar5 = **(int **)(iVar7 + DAT_000e711c) - 1;
    if (uVar5 < 4) {
                    /* WARNING: Could not recover jumptable at 0x000e7090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&switchD_000e7090::switchdataD_000e7094 +
                (uint)(&switchD_000e7090::switchdataD_000e7094)[uVar5] * 2 + 1))();
      return;
    }
    goto switchD_000e7090_caseD_4;
  }
  memset(acStack_3c,0,0x1e);
  switch(in_r0[0x47]) {
  case 0:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar2 + 0x11c))(piVar2,DAT_000e70a8 + 0xe6da2);
    sprintf(acStack_3c,(char *)(DAT_000e70ac + 0xe6dae),0x6e,0x6e);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,acStack_3c);
    **(undefined **)(iVar7 + DAT_000e70b0) = 1;
    break;
  case 1:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar2 + 0x11c))(piVar2,DAT_000e70b4 + 0xe6dde);
    sprintf(acStack_3c,(char *)(DAT_000e70b8 + 0xe6dea),0x78,0x78);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,acStack_3c);
    *(undefined *)(*(int *)(iVar7 + DAT_000e70b0) + 1) = 1;
    break;
  case 2:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar2 + 0x11c))(piVar2,DAT_000e70bc + 0xe6e22);
    sprintf(acStack_3c,(char *)(DAT_000e70c0 + 0xe6e2e),0x82,0x82);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,acStack_3c);
    *(undefined *)(*(int *)(iVar7 + DAT_000e70b0) + 2) = 1;
    break;
  case 3:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar2 + 0x11c))(piVar2,DAT_000e70c4 + 0xe6e5e);
    sprintf(acStack_3c,(char *)(DAT_000e70c8 + 0xe6e6a),0x96,0x96);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,acStack_3c);
    *(undefined *)(*(int *)(iVar7 + DAT_000e70b0) + 3) = 1;
    break;
  case 4:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar2 + 0x11c))(piVar2,DAT_000e70cc + 0xe6e9a);
    sprintf(acStack_3c,(char *)(DAT_000e70d0 + 0xe6ea6),0xa0,0xa0);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,acStack_3c);
    *(undefined *)(*(int *)(iVar7 + DAT_000e70b0) + 4) = 1;
    break;
  case 5:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar2 + 0x11c))(piVar2,DAT_000e70d4 + 0xe6ed6);
    sprintf(acStack_3c,(char *)(DAT_000e70d8 + 0xe6ee2),0xaa,0xaa);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,acStack_3c);
    *(undefined *)(*(int *)(iVar7 + DAT_000e70b0) + 5) = 1;
    break;
  case 6:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar2 + 0x11c))(piVar2,DAT_000e70dc + 0xe6f12);
    sprintf(acStack_3c,(char *)(DAT_000e70e0 + 0xe6f1e),0xb4,0xb4);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,acStack_3c);
    *(undefined *)(*(int *)(iVar7 + DAT_000e70b0) + 6) = 1;
    break;
  case 7:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar2 + 0x11c))(piVar2,DAT_000e70e4 + 0xe6f4e);
    sprintf(acStack_3c,(char *)(DAT_000e70e8 + 0xe6f5a),0xe6,0xe6);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,acStack_3c);
    *(undefined *)(*(int *)(iVar7 + DAT_000e70b0) + 7) = 1;
    break;
  case 8:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar2 + 0x11c))(piVar2,DAT_000e70ec + 0xe6f8a);
    sprintf(acStack_3c,(char *)(DAT_000e70f0 + 0xe6f98),0x104,0x104);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,acStack_3c);
    *(undefined *)(*(int *)(iVar7 + DAT_000e70b0) + 8) = 1;
    break;
  case 9:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    iVar7 = DAT_000e70f8;
    (**(code **)(*piVar2 + 0x11c))(piVar2,DAT_000e70f4 + 0xe6fcc);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(DAT_000e70fc + 0xe6fda));
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(DAT_000e7100 + 0xe6fe6));
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(iVar7 + 0xe6fd6));
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(DAT_000e7104 + 0xe6ffc));
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(DAT_000e7108 + 0xe7008));
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(iVar7 + 0xe6fd6));
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(DAT_000e710c + 0xe701e));
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(DAT_000e7110 + 0xe702a));
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(DAT_000e7114 + 0xe7036));
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(DAT_000e7118 + 0xe7042));
    iVar7 = in_r0[0x47];
    goto LAB_000e6e06;
  case 10:
    pcVar8 = *(code **)(*in_r0 + 0xd0);
    uVar4 = cocos2d::CCNode::getChildByTag((CCNode *)in_r0,DAT_000e70a4);
    (*pcVar8)(in_r0,uVar4,1);
    *(CCNode *)(in_r0 + 0x48) = (CCNode)0x1;
    SetPage((MarketLayer *)in_r0,0);
    Main_Number_Draw((MarketLayer *)in_r0);
    goto switchD_000e7090_caseD_4;
  default:
    in_r0[0x47] = in_r0[0x47] + 1;
    goto switchD_000e7090_caseD_4;
  }
  iVar7 = in_r0[0x47];
LAB_000e6e06:
  in_r0[0x47] = iVar7 + 1;
switchD_000e7090_caseD_4:
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



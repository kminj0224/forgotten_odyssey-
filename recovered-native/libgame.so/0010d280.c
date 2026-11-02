/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010d280  Symbol: onEnter */

/* New_UI_HERO_EXP::onEnter() */

void New_UI_HERO_EXP::onEnter(void)

{
  CCNode *in_r0;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CCSpriteFrameCache *pCVar9;
  undefined4 uVar10;
  float in_s0;
  float in_s1;
  undefined8 uVar11;
  undefined8 uVar12;
  CCPoint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar7 = DAT_0010d3d0 + 0x10d28c;
  pCVar9 = **(CCSpriteFrameCache ***)(iVar7 + DAT_0010d3d4);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,in_s0,in_s1);
  vDrawFrame(pCVar9,in_r0,(char *)(DAT_0010d3e0 + 0x10d2a6),local_28,local_24,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
  uVar10 = *puVar2;
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
  uVar3 = __mulsf3(*puVar2,0x3f000000);
  __subsf3(uVar10,uVar3);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
  iVar4 = (**(code **)(*piVar1 + 0x38))();
  uVar10 = *(undefined4 *)(iVar4 + 4);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
  iVar4 = (**(code **)(*piVar1 + 0x7c))();
  uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  uVar11 = __subsf3(uVar10,uVar3);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  *(undefined4 *)(in_r0 + 0x110) = local_20;
  *(undefined4 *)(in_r0 + 0x114) = local_1c;
  iVar5 = **(int **)(iVar7 + DAT_0010d3e4);
  iVar8 = **(int **)(iVar7 + DAT_0010d3e8);
  iVar6 = **(int **)(iVar7 + DAT_0010d3ec);
  iVar4 = *(int *)(iVar5 + (iVar8 * 9 + iVar6 + DAT_0010d3f0) * 4 + 4);
  if (iVar4 == 1) {
    uVar3 = **(undefined4 **)(iVar7 + DAT_0010d3f4);
  }
  else {
    uVar11 = __floatsidf((*(undefined4 **)(iVar7 + DAT_0010d3f4))[iVar4 + -1]);
    uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar12 = __muldf3((int)uVar11,uVar3,DAT_0010d3c8,DAT_0010d3cc);
    __adddf3((int)uVar11,uVar3,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    uVar3 = __fixdfsi();
  }
  uVar10 = __floatsisf(*(undefined4 *)(iVar5 + (iVar8 * 9 + iVar6 + DAT_0010d3f8) * 4 + 4));
  uVar3 = __floatsisf(uVar3);
  uVar3 = __divsf3(uVar10,uVar3);
  *(undefined4 *)(in_r0 + 0x118) = uVar3;
  cocos2d::CCLayer::onEnter((CCLayer *)in_r0);
  return;
}



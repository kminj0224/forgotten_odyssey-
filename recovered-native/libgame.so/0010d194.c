/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010d194  Symbol: onEnter */

/* New_UI_BOSS_HP::onEnter() */

void New_UI_BOSS_HP::onEnter(void)

{
  CCNode *in_r0;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  CCSpriteFrameCache *pCVar5;
  undefined4 uVar6;
  float in_s0;
  float in_s1;
  undefined8 uVar7;
  CCPoint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  pCVar5 = **(CCSpriteFrameCache ***)(DAT_0010d268 + 0x10d1a0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,in_s0,in_s1);
  vDrawFrame(pCVar5,in_r0,(char *)(DAT_0010d274 + 0x10d1b8),local_28,local_24,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
  (**(code **)(*piVar1 + 0x2c))(piVar1,DAT_0010d278);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
  uVar6 = *puVar2;
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
  uVar3 = __mulsf3(*puVar2,0x3f000000);
  __subsf3(uVar6,uVar3);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
  iVar4 = (**(code **)(*piVar1 + 0x38))();
  uVar6 = *(undefined4 *)(iVar4 + 4);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
  iVar4 = (**(code **)(*piVar1 + 0x7c))();
  uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  uVar7 = __subsf3(uVar6,uVar3);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  *(undefined4 *)(in_r0 + 0x110) = local_20;
  *(undefined4 *)(in_r0 + 0x114) = local_1c;
  *(undefined4 *)(in_r0 + 0x118) = 0x3f000000;
  *(undefined4 *)(in_r0 + 0x11c) = 0;
  cocos2d::CCLayer::onEnter((CCLayer *)in_r0);
  return;
}



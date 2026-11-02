/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011c3e0  Symbol: noticeOK */

/* New_Notice::noticeOK() */

void New_Notice::noticeOK(void)

{
  CCNode *in_r0;
  CCNode *pCVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  float in_s0;
  float in_s1;
  undefined8 uVar5;
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint local_28;
  CCPoint local_24;
  int local_20;
  int local_1c;
  
  *(undefined4 *)(in_r0 + 0x110) = 0;
  uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,in_s0,in_s1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  vDrawFrame(in_r0,(char *)(DAT_0011c494 + 0x11c41a),local_38,local_34,local_30,local_2c);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,8);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,8);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  __mulsf3(*puVar3,0x3f000000);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,8);
  iVar4 = (**(code **)(*piVar2 + 0x7c))();
  uVar5 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  uVar5 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  vDrawFrame(pCVar1,(char *)(DAT_0011c498 + 0x11c47c),local_28,local_24,local_20,local_1c);
  return;
}



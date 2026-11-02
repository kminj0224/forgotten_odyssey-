/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011c49c  Symbol: noticeOKorNO */

/* New_Notice::noticeOKorNO() */

void New_Notice::noticeOKorNO(void)

{
  CCNode *in_r0;
  CCNode *pCVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  float in_s0;
  float in_s1;
  undefined8 uVar6;
  CCPoint local_58;
  CCPoint local_54;
  int local_50;
  int local_4c;
  CCPoint local_48;
  CCPoint local_44;
  int local_40;
  int local_3c;
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint local_28;
  CCPoint local_24;
  int local_20;
  int local_1c;
  
  *(undefined4 *)(in_r0 + 0x110) = 1;
  uVar6 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,in_s0,in_s1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  pcVar5 = (char *)(DAT_0011c5ec + 0x11c4d0);
  vDrawFrame(in_r0,pcVar5,local_58,local_54,local_50,local_4c);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,8);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,8);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  __mulsf3(*puVar3,0x3f000000);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,8);
  iVar4 = (**(code **)(*piVar2 + 0x7c))();
  uVar6 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  uVar6 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_48,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = vDrawFrame(pCVar1,(char *)(DAT_0011c5f0 + 0x11c53c),local_48,local_44,local_40,local_3c);
  uVar6 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_38,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  vDrawFrame(in_r0,pcVar5,local_38,local_34,local_30,local_2c);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,9);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,9);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  __mulsf3(*puVar3,0x3f000000);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,9);
  iVar4 = (**(code **)(*piVar2 + 0x7c))();
  uVar6 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  uVar6 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  vDrawFrame(pCVar1,(char *)(DAT_0011c5f8 + 0x11c5d0),local_28,local_24,local_20,local_1c);
  return;
}



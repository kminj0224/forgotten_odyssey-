/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e4604  Symbol: Touch_Image_Pos */

/* Market_Unit::Touch_Image_Pos(int) */

void __thiscall Market_Unit::Touch_Image_Pos(Market_Unit *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  CCPoint aCStack_20 [12];
  
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
  iVar6 = *(int *)(DAT_000e46e8 + 0xe461c);
  pcVar5 = *(code **)(*piVar2 + 0x3c);
  __floatsisf(*(undefined4 *)(param_1 * 0x10 + iVar6));
  uVar8 = __floatsisf(0x140 - *(int *)(iVar6 + param_1 * 0x10 + 4));
  iVar1 = DAT_000e46f0;
  iVar6 = DAT_000e46ec;
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  (*pcVar5)(piVar2,aCStack_20);
  piVar7 = *(int **)(iVar6 + 0xe464c);
  piVar2 = *(int **)(iVar1 + 0xe4658);
  if (*(char *)(*piVar2 + *piVar7 * 9 + param_1 + DAT_000e46f4) == '\0') {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    (**(code **)(*piVar3 + 0x6c))(piVar3,1);
    if (*(char *)(*piVar2 + *piVar7 * 9 + param_1 + DAT_000e46f8) == '\0') {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
      uVar4 = 100;
      pcVar5 = *(code **)(*piVar2 + 0xec);
    }
    else {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
      uVar4 = 0xff;
      pcVar5 = *(code **)(*piVar2 + 0xec);
    }
    (*pcVar5)(piVar2,uVar4);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
    uVar4 = 0;
    pcVar5 = *(code **)(*piVar2 + 0x6c);
  }
  else {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
    uVar4 = 1;
    pcVar5 = *(code **)(*piVar2 + 0x6c);
  }
  (*pcVar5)(piVar2,uVar4);
  return;
}



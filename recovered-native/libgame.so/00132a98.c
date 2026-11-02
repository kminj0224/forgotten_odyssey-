/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00132a98  Symbol: FileLode */

/* Ending_Layer::FileLode() */

void __thiscall Ending_Layer::FileLode(Ending_Layer *this)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  float extraout_s0;
  undefined8 uVar8;
  float extraout_s1;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_00132b94 + 0x132aa6));
  iVar3 = DAT_00132b98;
  *(int **)(this + 0x110) = piVar1;
  iVar6 = *piVar1;
  pcVar5 = *(code **)(iVar6 + 0x3c);
  uVar2 = __mulsf3(**(undefined4 **)(iVar3 + 0x132ab4),0x3f000000);
  iVar3 = (**(code **)(iVar6 + 0x7c))(piVar1);
  uVar8 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  (*pcVar5)(piVar1,aCStack_30);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x110),3,3,pcVar5,uVar2);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_00132b9c + 0x132afe));
  *(int **)(this + 0x114) = piVar1;
  pcVar5 = *(code **)(*piVar1 + 0x3c);
  puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
  __mulsf3(*puVar4,0x3f000000);
  iVar3 = (**(code **)(**(int **)(this + 0x110) + 0x7c))();
  piVar1 = *(int **)(this + 0x114);
  uVar7 = *(undefined4 *)(iVar3 + 4);
  iVar3 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar2 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
  uVar8 = __addsf3(uVar7,uVar2);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  (*pcVar5)(piVar1,aCStack_28);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x114),4,4);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_00132ba0 + 0x132b66));
  *(int **)(this + 0x11c) = piVar1;
  pcVar5 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
  (*pcVar5)(piVar1,aCStack_20);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x11c),6,6);
  return;
}



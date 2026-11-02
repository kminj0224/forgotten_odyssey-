/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf7ec  Symbol: vScriptImgDraw_Fram_Plist */

/* vScriptImgDraw_Fram_Plist(cocos2d::CCNode*, char const*, _KG_Animation*, cocos2d::CCSize, int,
   int, cocos2d::CCPoint, cocos2d::CCSize) */

int * vScriptImgDraw_Fram_Plist
                (CCNode *param_1,char *param_2,_KG_Animation *param_3,CCSize param_4,int param_5,
                int param_6,CCPoint param_7,CCSize param_8)

{
  char *pcVar1;
  CCDirector *this;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined auStack_44 [4];
  char *local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = (char *)(*(int *)(DAT_000bf9d8 + 0xbf806) + 0xc);
  FUN_001eed40(&local_3c,DAT_000bf9d4 + 0xbf802,auStack_44);
  this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar2 = cocos2d::CCDirector::getContentScaleFactor(this);
  iVar3 = __aeabi_fcmpeq(uVar2,0x40000000);
  if (iVar3 == 0) {
    FUN_001ed9dc(&local_40,param_2);
  }
  else {
    FUN_001ed9dc(&local_40,param_2);
    iVar3 = DAT_000bf9dc + 0xbf840;
    FUN_001edeb0(&local_40,*(int *)(local_40 + -0xc) + -4,iVar3);
    FUN_001edeb0(&local_3c,*(int *)((int)local_3c + -0xc) + -4,iVar3);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38);
  pcVar1 = local_40;
  if ((*(size_t *)(local_40 + -0xc) == *(size_t *)((int)local_3c + -0xc)) &&
     (iVar3 = memcmp(local_40,local_3c,*(size_t *)(local_40 + -0xc)), iVar3 == 0)) {
    piVar6 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000bf9e0 + 0xbf88e));
  }
  else {
    piVar6 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar1);
  }
  if (**(int **)(DAT_000bf9e4 + 0xbf898) == 2) {
    uVar2 = __addsf3(*(undefined4 *)(param_3 + 0x10));
    puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
    uVar2 = __addsf3(uVar2,*puVar4);
    uVar2 = __mulsf3(uVar2,0x3f000000);
    __subsf3(uVar2,param_4);
    uVar2 = __addsf3(*(int *)(param_3 + 0x14) + -0x80000000);
    iVar3 = (**(code **)(*piVar6 + 0x7c))(piVar6);
    uVar2 = __subsf3(uVar2,*(undefined4 *)(iVar3 + 4));
    uVar2 = __mulsf3(uVar2,0x3f000000);
    uVar5 = __mulsf3(param_5,0x3f000000);
    uVar7 = __subsf3(uVar2,uVar5);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    local_38 = local_30;
    local_34 = local_2c;
  }
  else {
    uVar2 = __floatsisf(*(int *)(param_3 + 0x28) / 2);
    uVar2 = __addsf3(uVar2,*(undefined4 *)(param_3 + 0x10));
    uVar2 = __mulsf3(uVar2,0x3f000000);
    uVar2 = __subsf3(uVar2,param_4);
    __subsf3(uVar2,in_stack_00000014);
    iVar3 = *(int *)(param_3 + 0x14);
    uVar2 = __floatsisf(*(int *)(param_3 + 0x2c) / 2);
    uVar2 = __subsf3(iVar3 + -0x80000000,uVar2);
    uVar2 = __mulsf3(uVar2,0x3f000000);
    uVar2 = __addsf3(uVar2,param_5);
    uVar7 = __addsf3(uVar2,in_stack_00000018);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    local_38 = local_28;
    local_34 = local_24;
    *(undefined4 *)(param_3 + 8) = local_28;
    *(undefined4 *)(param_3 + 0xc) = local_24;
  }
  (**(code **)(*piVar6 + 0x3c))(piVar6,&local_38);
  (**(code **)(*piVar6 + 0x74))(piVar6,&param_8);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar6,param_6,param_7);
  FUN_001edf58(&local_40);
  FUN_001ed6b8(&local_3c);
  FUN_001ed6b8(&local_40);
  return piVar6;
}



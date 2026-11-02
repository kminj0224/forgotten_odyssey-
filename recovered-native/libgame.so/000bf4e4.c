/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf4e4  Symbol: vScriptImgDraw_Fram */

/* vScriptImgDraw_Fram(cocos2d::CCNode*, char const*, _KG_Animation*, cocos2d::CCSize, int, int,
   cocos2d::CCPoint, cocos2d::CCSize) */

int * vScriptImgDraw_Fram(CCNode *param_1,char *param_2,_KG_Animation *param_3,CCSize param_4,
                         int param_5,int param_6,CCPoint param_7,CCSize param_8)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar6 = *(int **)(DAT_000bf66c + 0xbf4fa);
  local_3c = (char *)(*(int *)(DAT_000bf670 + 0xbf506) + 0xc);
  if (*piVar6 == 2) {
    FUN_001ed9dc(&local_3c);
    FUN_001edeb0(&local_3c,*(int *)(local_3c + -0xc) + -4,DAT_000bf674 + 0xbf522);
  }
  else {
    FUN_001ed9dc(&local_3c);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile(local_3c);
  if (piVar1 != (int *)0x0) {
    if (*piVar6 == 2) {
      uVar2 = __addsf3(*(undefined4 *)(param_3 + 0x10));
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar2 = __addsf3(uVar2,*puVar3);
      uVar2 = __mulsf3(uVar2,0x3f000000);
      __subsf3(uVar2,param_4);
      uVar2 = __addsf3(*(int *)(param_3 + 0x14) + -0x80000000);
      iVar4 = (**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar2 = __subsf3(uVar2,*(undefined4 *)(iVar4 + 4));
      uVar2 = __mulsf3(uVar2,0x3f000000);
      uVar5 = __mulsf3(param_5,0x3f000000);
      uVar7 = __subsf3(uVar2,uVar5);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20))
      ;
      local_38 = local_30;
      local_34 = local_2c;
    }
    else {
      uVar2 = __floatsisf(*(int *)(param_3 + 0x28) / 2);
      uVar2 = __addsf3(uVar2,*(undefined4 *)(param_3 + 0x10));
      uVar2 = __mulsf3(uVar2,0x3f000000);
      uVar2 = __subsf3(uVar2,param_4);
      __subsf3(uVar2,in_stack_00000014);
      iVar4 = *(int *)(param_3 + 0x14);
      uVar2 = __floatsisf(*(int *)(param_3 + 0x2c) / 2);
      uVar2 = __subsf3(iVar4 + -0x80000000,uVar2);
      uVar2 = __mulsf3(uVar2,0x3f000000);
      uVar2 = __addsf3(uVar2,param_5);
      uVar7 = __addsf3(uVar2,in_stack_00000018);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20))
      ;
      local_38 = local_28;
      local_34 = local_24;
      *(undefined4 *)(param_3 + 8) = local_28;
      *(undefined4 *)(param_3 + 0xc) = local_24;
    }
    (**(code **)(*piVar1 + 0x3c))(piVar1,&local_38);
    (**(code **)(*piVar1 + 0x74))(piVar1,&param_8);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,param_6,param_7);
    FUN_001edf58(&local_3c);
  }
  FUN_001ed6b8(&local_3c);
  return piVar1;
}



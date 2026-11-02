/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf360  Symbol: vScriptImgDraw */

/* vScriptImgDraw(cocos2d::CCNode*, char const*, _KG_Animation*, cocos2d::CCSize, int, int,
   cocos2d::CCPoint) */

int * vScriptImgDraw(CCNode *param_1,char *param_2,_KG_Animation *param_3,CCSize param_4,int param_5
                    ,int param_6,CCPoint param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  char *local_3c;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  undefined4 local_28 [3];
  
  piVar6 = *(int **)(DAT_000bf4d8 + 0xbf376);
  local_3c = (char *)(*(int *)(DAT_000bf4dc + 0xbf37a) + 0xc);
  if (*piVar6 == 2) {
    FUN_001ed9dc(&local_3c);
    FUN_001edeb0(&local_3c,*(int *)(local_3c + -0xc) + -4,DAT_000bf4e0 + 0xbf39e);
  }
  else {
    FUN_001ed9dc(&local_3c);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)local_38);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile(local_3c);
  if (piVar1 != (int *)0x0) {
    uVar4 = *(undefined4 *)(param_3 + 0x10);
    iVar7 = *piVar1;
    if (*piVar6 == 2) {
      uVar4 = __addsf3(uVar4,uVar4);
      puVar2 = (undefined4 *)(**(code **)(iVar7 + 0x7c))(piVar1);
      uVar4 = __addsf3(uVar4,*puVar2);
      uVar4 = __mulsf3(uVar4,0x3f000000);
      __subsf3(uVar4,param_4);
      uVar4 = __addsf3(*(int *)(param_3 + 0x14) + -0x80000000);
      iVar7 = (**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar4 = __subsf3(uVar4,*(undefined4 *)(iVar7 + 4));
      uVar4 = __mulsf3(uVar4,0x3f000000);
      uVar3 = __mulsf3(param_5,0x3f000000);
      uVar8 = __subsf3(uVar4,uVar3);
      cocos2d::CCPoint::CCPoint((CCPoint *)local_30,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
      local_38[0] = local_30[0];
    }
    else {
      puVar2 = (undefined4 *)(**(code **)(iVar7 + 0x7c))(piVar1);
      uVar4 = __addsf3(uVar4,*puVar2);
      uVar4 = __mulsf3(uVar4,0x3f000000);
      __subsf3(uVar4,param_4);
      iVar5 = *(int *)(param_3 + 0x14);
      iVar7 = (**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar4 = __subsf3(iVar5 + -0x80000000,*(undefined4 *)(iVar7 + 4));
      uVar4 = __mulsf3(uVar4,0x3f000000);
      uVar8 = __subsf3(uVar4,param_5);
      cocos2d::CCPoint::CCPoint((CCPoint *)local_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
      local_38[0] = local_28[0];
    }
    (**(code **)(*piVar1 + 0x3c))(piVar1,local_38);
    (**(code **)(*piVar1 + 0x74))(piVar1,&stack0x0000000c);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,param_6,param_7);
    FUN_001edf58(&local_3c);
  }
  FUN_001ed6b8(&local_3c);
  return piVar1;
}



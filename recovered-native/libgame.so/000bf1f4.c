/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf1f4  Symbol: vScriptImgDraw */

/* vScriptImgDraw(cocos2d::CCNode*, char const*, _KG_Animation*, cocos2d::CCSize, int, int,
   cocos2d::CCPoint, bool) */

int * vScriptImgDraw(CCNode *param_1,char *param_2,_KG_Animation *param_3,CCSize param_4,int param_5
                    ,int param_6,CCPoint param_7,bool param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  CCTexture2D *this;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  char in_stack_00000014;
  char *local_3c;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  undefined4 local_28 [3];
  
  piVar5 = *(int **)(DAT_000bf354 + 0xbf20c);
  local_3c = (char *)(*(int *)(DAT_000bf358 + 0xbf210) + 0xc);
  if (*piVar5 == 2) {
    FUN_001ed9dc(&local_3c);
    FUN_001edeb0(&local_3c,*(int *)(local_3c + -0xc) + -4,DAT_000bf35c + 0xbf230);
  }
  else {
    FUN_001ed9dc(&local_3c);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)local_38);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile(local_3c);
  if (piVar1 != (int *)0x0) {
    uVar3 = *(undefined4 *)(param_3 + 0x10);
    iVar6 = *piVar1;
    if (*piVar5 == 2) {
      uVar3 = __addsf3(uVar3,uVar3);
      puVar2 = (undefined4 *)(**(code **)(iVar6 + 0x7c))(piVar1);
      uVar3 = __addsf3(uVar3,*puVar2);
      __mulsf3(uVar3,0x3f000000);
      uVar3 = __addsf3(*(int *)(param_3 + 0x14) + -0x80000000);
      iVar6 = (**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar3 = __subsf3(uVar3,*(undefined4 *)(iVar6 + 4));
      uVar7 = __mulsf3(uVar3,0x3f000000);
      cocos2d::CCPoint::CCPoint((CCPoint *)local_30,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
      local_38[0] = local_30[0];
    }
    else {
      puVar2 = (undefined4 *)(**(code **)(iVar6 + 0x7c))(piVar1);
      uVar3 = __addsf3(uVar3,*puVar2);
      __mulsf3(uVar3,0x3f000000);
      iVar4 = *(int *)(param_3 + 0x14);
      iVar6 = (**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar3 = __subsf3(iVar4 + -0x80000000,*(undefined4 *)(iVar6 + 4));
      uVar7 = __mulsf3(uVar3,0x3f000000);
      cocos2d::CCPoint::CCPoint((CCPoint *)local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
      local_38[0] = local_28[0];
    }
    if (in_stack_00000014 != '\0') {
      this = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
      cocos2d::CCTexture2D::setAliasTexParameters(this);
    }
    (**(code **)(*piVar1 + 0x3c))(piVar1,local_38);
    (**(code **)(*piVar1 + 0x74))(piVar1,&param_8);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,param_6,param_7);
    FUN_001edf58(&local_3c);
  }
  FUN_001ed6b8(&local_3c);
  return piVar1;
}



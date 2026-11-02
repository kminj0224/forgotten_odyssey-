/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf678  Symbol: vScriptImgDraw_Texture */

/* vScriptImgDraw_Texture(cocos2d::CCNode*, _KG_Animation*, cocos2d::CCSize, int, int,
   cocos2d::CCPoint, cocos2d::CCSize) */

int * vScriptImgDraw_Texture
                (CCNode *param_1,_KG_Animation *param_2,CCSize param_3,int param_4,int param_5,
                CCPoint param_6,CCSize param_7)

{
  int *piVar1;
  CCTexture2D *pCVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_34 = *(int *)(DAT_000bf7e4 + 0xbf690) + 0xc;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(param_1,0);
  pCVar2 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))();
  piVar1 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar2);
  if (piVar1 != (int *)0x0) {
    if (**(int **)(DAT_000bf7e8 + 0xbf6ba) == 2) {
      uVar3 = __addsf3(*(undefined4 *)(param_2 + 0x10));
      puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar3 = __addsf3(uVar3,*puVar4);
      uVar3 = __mulsf3(uVar3,0x3f000000);
      __subsf3(uVar3,param_3);
      uVar3 = __addsf3(*(int *)(param_2 + 0x14) + -0x80000000);
      iVar5 = (**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar3 = __subsf3(uVar3,*(undefined4 *)(iVar5 + 4));
      uVar3 = __mulsf3(uVar3,0x3f000000);
      uVar6 = __mulsf3(param_4,0x3f000000);
      uVar7 = __subsf3(uVar3,uVar6);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20))
      ;
      local_30 = local_28;
      local_2c = local_24;
    }
    else {
      uVar3 = __floatsisf(*(int *)(param_2 + 0x28) / 2);
      uVar3 = __addsf3(uVar3,*(undefined4 *)(param_2 + 0x10));
      uVar3 = __mulsf3(uVar3,0x3f000000);
      uVar3 = __subsf3(uVar3,param_3);
      __subsf3(uVar3,in_stack_00000010);
      iVar5 = *(int *)(param_2 + 0x14);
      uVar3 = __floatsisf(*(int *)(param_2 + 0x2c) / 2);
      uVar3 = __subsf3(iVar5 + -0x80000000,uVar3);
      uVar3 = __mulsf3(uVar3,0x3f000000);
      uVar3 = __addsf3(uVar3,param_4);
      uVar7 = __addsf3(uVar3,in_stack_00000014);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20))
      ;
      local_30 = local_20;
      local_2c = local_1c;
      *(undefined4 *)(param_2 + 8) = local_20;
      *(undefined4 *)(param_2 + 0xc) = local_1c;
    }
    (**(code **)(*piVar1 + 0x3c))(piVar1,&local_30);
    (**(code **)(*piVar1 + 0x74))(piVar1,&param_7);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,param_5,param_6);
    FUN_001edf58(&local_34);
  }
  FUN_001ed6b8(&local_34);
  return piVar1;
}



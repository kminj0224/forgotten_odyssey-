/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00110b4c  Symbol: Unit_Collision */

/* Unit_Collision(cocos2d::CCLayer*, cocos2d::CCLayer*, bool) */

bool Unit_Collision(CCLayer *param_1,CCLayer *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  undefined4 local_24;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  iVar2 = (**(code **)(*(int *)param_2 + 0xa8))(param_2);
  piVar9 = *(int **)(iVar1 + 4);
  iVar8 = *piVar9;
  if (iVar8 == 4) {
    return false;
  }
  if (1 < iVar8 - 2U) {
    if (iVar2 == 0) {
      return false;
    }
    if (piVar9[0x19] == 3) {
      return false;
    }
  }
  if (param_3) {
    if (iVar8 != 0) {
      if (iVar8 != 2) {
LAB_00110bbe:
        if (iVar8 != 1) {
          if (iVar8 == 3) {
            if (**(int **)(iVar2 + 4) != 1) {
              return false;
            }
            goto LAB_00110be0;
          }
          goto LAB_00110f6c;
        }
        if (**(int **)(iVar2 + 4) != 3) goto LAB_00110f6c;
        goto LAB_00110be0;
      }
      if (**(int **)(iVar2 + 4) == 0) goto LAB_00110bb4;
      goto LAB_00110f6c;
    }
    if (**(int **)(iVar2 + 4) != 2) goto LAB_00110f6c;
LAB_00110bb4:
    if (**(int **)(iVar2 + 4) == 4) goto LAB_00110bbe;
LAB_00110cd2:
    local_24 = 0;
    if (piVar9[1] == 4) {
      __mulsf3(piVar9[0x44],0x3f000000);
      local_24 = __fixsfsi();
    }
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar4 = __addsf3(*puVar3,*(undefined4 *)(iVar1 + 0x10));
    uVar5 = __mulsf3(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x100),0x3f000000);
    uVar4 = __subsf3(uVar4,uVar5);
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
    uVar5 = __mulsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x100),0x3f000000);
    uVar5 = __subsf3(*puVar3,uVar5);
    iVar8 = __aeabi_fcmplt(uVar4,uVar5);
    if (iVar8 != 0) {
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar4 = __addsf3(*puVar3,*(undefined4 *)(iVar1 + 0x10));
      uVar5 = __mulsf3(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x100),0x3f000000);
      uVar4 = __addsf3(uVar4,uVar5);
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
      iVar7 = *(int *)(iVar2 + 4);
      uVar5 = __mulsf3(*(undefined4 *)(iVar7 + 0x100),0x3f000000);
      uVar5 = __subsf3(*puVar3,uVar5);
      iVar8 = __aeabi_fcmpgt(uVar4,uVar5);
      if (iVar8 == 0) goto LAB_00110f72;
      uVar4 = *(undefined4 *)(iVar7 + 0x24);
      goto LAB_00110c9a;
    }
LAB_00110f72:
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar4 = __floatsisf(local_24);
    uVar5 = __addsf3(*puVar3,*(undefined4 *)(iVar1 + 0x10));
    uVar6 = __mulsf3(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x100),0x3f000000);
    uVar5 = __addsf3(uVar5,uVar6);
    uVar5 = __subsf3(uVar5,uVar4);
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
    uVar6 = __mulsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x100),0x3f000000);
    uVar6 = __subsf3(*puVar3,uVar6);
    iVar8 = __aeabi_fcmplt(uVar5,uVar6);
    if (iVar8 != 0) {
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      iVar8 = *(int *)(iVar1 + 4);
      uVar5 = __addsf3(*puVar3,*(undefined4 *)(iVar1 + 0x10));
      uVar6 = __mulsf3(*(undefined4 *)(iVar8 + 0x100),0x3f000000);
      uVar5 = __addsf3(uVar5,uVar6);
      uVar5 = __addsf3(uVar5,*(undefined4 *)(iVar8 + 0x110));
      uVar5 = __subsf3(uVar5,uVar4);
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
      uVar6 = __mulsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x100),0x3f000000);
      uVar6 = __subsf3(*puVar3,uVar6);
      iVar8 = __aeabi_fcmpgt(uVar5,uVar6);
      if (iVar8 == 0) goto LAB_00110e18;
LAB_00110ed4:
      iVar8 = *(int *)(iVar2 + 4);
      goto LAB_00110c98;
    }
LAB_00110e18:
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar5 = __addsf3(*puVar3,*(undefined4 *)(iVar1 + 0x10));
    uVar6 = __mulsf3(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x100),0x3f000000);
    uVar5 = __addsf3(uVar5,uVar6);
    uVar5 = __subsf3(uVar5,uVar4);
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
    uVar6 = __mulsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x100),0x3f000000);
    uVar6 = __addsf3(uVar6,*puVar3);
    iVar8 = __aeabi_fcmplt(uVar5,uVar6);
    if (iVar8 != 0) {
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar5 = __addsf3(*puVar3,*(undefined4 *)(iVar1 + 0x10));
      iVar1 = *(int *)(iVar1 + 4);
      uVar6 = __mulsf3(*(undefined4 *)(iVar1 + 0x100),0x3f000000);
      uVar5 = __addsf3(uVar5,uVar6);
      uVar5 = __addsf3(uVar5,*(undefined4 *)(iVar1 + 0x110));
      uVar4 = __subsf3(uVar5,uVar4);
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
      uVar5 = __mulsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x100),0x3f000000);
      uVar5 = __addsf3(uVar5,*puVar3);
      iVar1 = __aeabi_fcmpgt(uVar4,uVar5);
      if (iVar1 != 0) goto LAB_00110ed4;
    }
LAB_00110f6c:
    bVar10 = false;
  }
  else {
    if (iVar8 == 0) {
      if (**(int **)(iVar2 + 4) == 2) {
        return false;
      }
LAB_00110cc8:
      if (**(int **)(iVar2 + 4) != 4) goto LAB_00110cd2;
    }
    else if (iVar8 == 2) {
      if (**(int **)(iVar2 + 4) == 0) {
        return false;
      }
      goto LAB_00110cc8;
    }
    if (iVar8 == 1) {
      iVar8 = **(int **)(iVar2 + 4);
      if (iVar8 == 3) {
        return false;
      }
      if (iVar8 == 5) {
        return false;
      }
      if (iVar8 == 7) {
        return false;
      }
    }
    else {
      if (iVar8 != 3) {
        return false;
      }
      if (**(int **)(iVar2 + 4) == 1) {
        return false;
      }
      if (**(int **)(iVar2 + 4) == 5) {
        return false;
      }
    }
LAB_00110be0:
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar4 = __mulsf3(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x100),0x3f000000);
    uVar4 = __subsf3(*puVar3,uVar4);
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
    uVar5 = __addsf3(*puVar3,*(undefined4 *)(iVar2 + 0x10));
    uVar6 = __mulsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x100),0x3f000000);
    uVar5 = __addsf3(uVar5,uVar6);
    iVar8 = __aeabi_fcmplt(uVar4,uVar5);
    if (iVar8 == 0) {
LAB_00110fe0:
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar4 = __mulsf3(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x100),0x3f000000);
      uVar4 = __subsf3(*puVar3,uVar4);
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
      uVar5 = __addsf3(*puVar3,*(undefined4 *)(iVar2 + 0x10));
      uVar6 = __mulsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x100),0x3f000000);
      uVar5 = __addsf3(uVar5,uVar6);
      iVar8 = __aeabi_fcmpgt(uVar4,uVar5);
      if (iVar8 == 0) {
        return false;
      }
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      iVar1 = *(int *)(iVar1 + 4);
      uVar4 = __mulsf3(*(undefined4 *)(iVar1 + 0x100),0x3f000000);
      uVar4 = __subsf3(*puVar3,uVar4);
      uVar4 = __subsf3(uVar4,*(undefined4 *)(iVar1 + 0x110));
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
      uVar5 = __addsf3(*puVar3,*(undefined4 *)(iVar2 + 0x10));
      iVar2 = *(int *)(iVar2 + 4);
      uVar6 = __mulsf3(*(undefined4 *)(iVar2 + 0x100),0x3f000000);
      uVar5 = __addsf3(uVar5,uVar6);
      iVar1 = __aeabi_fcmplt(uVar4,uVar5);
      if (iVar1 == 0) goto LAB_00110f6c;
      uVar4 = *(undefined4 *)(iVar2 + 0x24);
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar4 = __mulsf3(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x100),0x3f000000);
      uVar4 = __addsf3(uVar4,*puVar3);
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
      iVar8 = *(int *)(iVar2 + 4);
      uVar5 = __addsf3(*puVar3,*(undefined4 *)(iVar2 + 0x10));
      uVar6 = __mulsf3(*(undefined4 *)(iVar8 + 0x100),0x3f000000);
      uVar5 = __addsf3(uVar5,uVar6);
      iVar7 = __aeabi_fcmpgt(uVar4,uVar5);
      if (iVar7 == 0) goto LAB_00110fe0;
LAB_00110c98:
      uVar4 = *(undefined4 *)(iVar8 + 0x24);
    }
LAB_00110c9a:
    iVar1 = __aeabi_fcmpgt(uVar4,0);
    bVar10 = iVar1 != 0;
  }
  return bVar10;
}



/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011103c  Symbol: Unit_Collistion_Name */

/* Unit_Collistion_Name(cocos2d::CCLayer*, bool) */

int * Unit_Collistion_Name(CCLayer *param_1,bool param_2)

{
  int iVar1;
  CCArray *this;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint local_34;
  int local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  this = (CCArray *)(**(code **)(***(int ***)(DAT_001111d8 + 0x111054) + 0x58))();
  local_34 = 0;
  local_24 = DAT_001111dc;
  local_28 = DAT_001111e0;
  local_2c = (int *)0x0;
  local_30 = 0;
  do {
    uVar5 = cocos2d::CCArray::count(this);
    if (uVar5 <= local_34) {
      return local_2c;
    }
    piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this,local_34);
    iVar3 = (**(code **)(*piVar2 + 0xa0))();
    if (((((iVar3 + DAT_001111e4 != 0) && (iVar3 + DAT_001111e8 != 0)) &&
         (iVar3 + DAT_001111ec != 0)) &&
        ((((iVar3 + DAT_001111f0 != 0 && (iVar3 + DAT_001111f4 != 0)) &&
          ((iVar3 + DAT_001111f8 != 0 &&
           ((iVar3 + DAT_001111fc != 0 && (iVar3 + DAT_00111200 != 0)))))) && (iVar3 != -0x1e)))) &&
       (((iVar3 + DAT_00111204 != 0 && (iVar3 = (**(code **)(*piVar2 + 0x68))(piVar2), iVar3 != 0))
        && (iVar3 = (**(code **)(*piVar2 + 0xa8))(piVar2), iVar3 != 0)))) {
      iVar6 = **(int **)(iVar1 + 4);
      if ((*(int **)(iVar1 + 4))[1] == DAT_00111208) {
        if ((((iVar6 == 1) && (**(int **)(iVar3 + 4) == 4)) &&
            (iVar6 = Unit_Collision(param_1,(CCLayer *)piVar2,false), iVar6 != 0)) ||
           (((**(int **)(iVar1 + 4) == 0 && (**(int **)(iVar3 + 4) == 5)) &&
            (iVar3 = Unit_Collision(param_1,(CCLayer *)piVar2,false), iVar3 != 0))))
        goto LAB_001111b4;
      }
      else if ((iVar6 != **(int **)(iVar3 + 4)) &&
              (iVar3 = Unit_Collision(param_1,(CCLayer *)piVar2,param_2), iVar3 != 0)) {
        iVar3 = **(int **)(iVar1 + 4);
        if ((iVar3 == 2) || (iVar3 == 0)) {
          puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x38))(piVar2);
          iVar3 = __aeabi_fcmpgt(local_24,*puVar4);
          if (iVar3 != 0) {
            puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x38))(piVar2);
            local_24 = *puVar4;
            local_30 = local_30 + 1;
LAB_001111b4:
            local_2c = piVar2;
          }
        }
        else if ((iVar3 == 3) || (iVar3 == 1)) {
          puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x38))(piVar2);
          iVar3 = __aeabi_fcmplt(local_28,*puVar4);
          if (iVar3 != 0) {
            puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x38))(piVar2);
            local_28 = *puVar4;
            local_30 = local_30 + 1;
            goto LAB_001111b4;
          }
        }
      }
    }
    if (5 < local_30) {
      return local_2c;
    }
    local_34 = local_34 + 1;
  } while( true );
}



/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00111484  Symbol: Unit_Attack_Call */

/* Unit_Attack_Call(cocos2d::CCLayer*, void*) */

void Unit_Attack_Call(CCLayer *param_1,void *param_2)

{
  CCArray *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  _Unit_Stage *p_Var4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  this = (CCArray *)(**(code **)(***(int ***)(DAT_001115bc + 0x111490) + 0x58))();
  iVar1 = cocos2d::CCArray::count(this);
  do {
    if (iVar1 <= (int)uVar6) {
      return;
    }
    piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar6);
    iVar3 = (**(code **)(*piVar2 + 0xa0))();
    if (((((((iVar3 + DAT_001115c0 == 0) || (iVar3 + DAT_001115c4 == 0)) ||
           (iVar3 + DAT_001115c8 == 0)) ||
          ((iVar3 + DAT_001115cc == 0 || (iVar3 + DAT_001115d0 == 0)))) ||
         ((iVar3 + DAT_001115d4 == 0 || ((iVar3 + DAT_001115d8 == 0 || (iVar3 + DAT_001115dc == 0)))
          ))) || (iVar3 == -0x1e)) || (iVar3 + DAT_001115e0 == 0)) {
      if (((uVar6 == iVar1 - 1U) && (*(char *)(*(int *)((int)param_2 + 4) + 0x2c) == '\0')) &&
         (iVar3 = __aeabi_fcmpeq(*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x3c),0), iVar3 != 0))
      {
LAB_00111596:
        ani_Move_ani(param_1);
        *(undefined *)(*(int *)((int)param_2 + 4) + 0xd) = 0;
        return;
      }
    }
    else {
      p_Var4 = (_Unit_Stage *)(**(code **)(*piVar2 + 0xa8))(piVar2);
      if ((p_Var4 != (_Unit_Stage *)0x0) && (iVar3 = Unit_Attack_Collision_Pass(p_Var4), iVar3 != 0)
         ) {
        if ((**(int **)((int)param_2 + 4) != **(int **)(p_Var4 + 4)) &&
           (iVar3 = Unit_Collision(param_1,(CCLayer *)piVar2,false), iVar3 != 0)) {
          if (*(char *)(*(int *)((int)param_2 + 4) + 0xc0) == '\0') {
            ani_attack_ani(param_1);
          }
          *(undefined *)(*(int *)((int)param_2 + 4) + 0xd) = 1;
          return;
        }
        if (((uVar6 == iVar1 - 1U) &&
            (iVar3 = *(int *)((int)param_2 + 4), *(char *)(iVar3 + 0x2c) == '\0')) &&
           ((iVar5 = __aeabi_fcmpeq(*(undefined4 *)(iVar3 + 0x3c),0), iVar5 != 0 &&
            (*(char *)(iVar3 + 0x84) == '\0')))) goto LAB_00111596;
      }
    }
    uVar6 = uVar6 + 1;
  } while( true );
}



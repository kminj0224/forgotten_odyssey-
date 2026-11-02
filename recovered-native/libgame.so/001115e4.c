/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001115e4  Symbol: Unit_9000_Attack_Call */

/* Unit_9000_Attack_Call(cocos2d::CCLayer*, void*) */

void Unit_9000_Attack_Call(CCLayer *param_1,void *param_2)

{
  CCArray *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  this = (CCArray *)(**(code **)(***(int ***)(DAT_0011172c + 0x1115f0) + 0x58))();
  iVar1 = cocos2d::CCArray::count(this);
  do {
    if (iVar1 <= (int)uVar5) {
      return;
    }
    piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar5);
    iVar3 = (**(code **)(*piVar2 + 0xa0))();
    if ((((((iVar3 + DAT_00111730 == 0) || (iVar3 + DAT_00111734 == 0)) ||
          (iVar3 + DAT_00111738 == 0)) ||
         (((iVar3 + DAT_0011173c == 0 || (iVar3 + DAT_00111740 == 0)) ||
          ((iVar3 + DAT_00111744 == 0 ||
           ((iVar3 + DAT_00111748 == 0 || (iVar3 + DAT_0011174c == 0)))))))) || (iVar3 == -0x1e)) ||
       (iVar3 + DAT_00111750 == 0)) {
      if (((uVar5 == iVar1 - 1U) && (*(char *)(*(int *)((int)param_2 + 4) + 0x2c) == '\0')) &&
         (iVar3 = __aeabi_fcmpeq(*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x3c),0), iVar3 != 0))
      {
LAB_00111708:
        ani_Move_ani(param_1);
        *(undefined *)(*(int *)((int)param_2 + 4) + 0xd) = 0;
        return;
      }
    }
    else {
      iVar3 = (**(code **)(*piVar2 + 0xa8))(piVar2);
      if ((iVar3 != 0) && ((*(int **)(iVar3 + 4))[0x19] != 4)) {
        if (((**(int **)(iVar3 + 4) == 4) &&
            ((**(int **)((int)param_2 + 4) == 1 &&
             (iVar4 = Unit_Collision(param_1,(CCLayer *)piVar2,false), iVar4 != 0)))) ||
           ((**(int **)(iVar3 + 4) == 5 &&
            ((**(int **)((int)param_2 + 4) == 0 &&
             (iVar3 = Unit_Collision(param_1,(CCLayer *)piVar2,false), iVar3 != 0)))))) {
          ani_attack_ani(param_1);
          *(undefined *)(*(int *)((int)param_2 + 4) + 0xd) = 1;
          return;
        }
        if ((((uVar5 == iVar1 - 1U) &&
             (iVar3 = *(int *)((int)param_2 + 4), *(char *)(iVar3 + 0x2c) == '\0')) &&
            (iVar4 = __aeabi_fcmpeq(*(undefined4 *)(iVar3 + 0x3c),0), iVar4 != 0)) &&
           (*(char *)(iVar3 + 0x84) == '\0')) goto LAB_00111708;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



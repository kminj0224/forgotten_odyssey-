/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00111788  Symbol: Unit_130_Attack_Time */

/* Unit_130_Attack_Time(cocos2d::CCLayer*, _Unit_Stage*, cocos2d::CCNode*) */

undefined4 Unit_130_Attack_Time(CCLayer *param_1,_Unit_Stage *param_2,CCNode *param_3)

{
  undefined uVar1;
  int iVar2;
  CCSprite *pCVar3;
  undefined4 uVar4;
  int iVar5;
  CCNode **ppCVar6;
  CCNode *pCVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  iVar2 = Unit_Attack_Timeing(param_2);
  if (iVar2 != 0) {
    iVar5 = *(int *)(param_2 + 4);
    uVar9 = __extendsfdf2(*(undefined4 *)(iVar5 + 0x3c));
    uVar10 = __extendsfdf2(*(undefined4 *)(iVar5 + 0x40));
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_001118f0,DAT_001118f4);
    iVar2 = __aeabi_dcmpgt((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                           (int)((ulonglong)uVar10 >> 0x20));
    if (iVar2 != 0) {
      if (*(char *)(iVar5 + 0x2c) == '\0') {
        *(char *)(iVar5 + 0x2c) = '\x01';
        pCVar3 = (CCSprite *)bullet_return(param_1);
        if (pCVar3 != (CCSprite *)0x0) {
          ppCVar6 = *(CCNode ***)(DAT_00111900 + 0x1117e8);
          if ((*(int *)(*(int *)(param_2 + 4) + 0x120) == 0) ||
             (iVar2 = Random(0,100), **(int **)(DAT_00111904 + 0x1117fa) < iVar2)) {
            pCVar7 = *ppCVar6;
            (**(code **)(*(int *)param_1 + 0x38))(param_1);
            iVar2 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
            uVar8 = *(undefined4 *)(iVar2 + 4);
            iVar2 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
            uVar4 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
            uVar4 = __addsf3(uVar8,uVar4);
            uVar9 = __addsf3(uVar4,DAT_00111908);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
            iVar2 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
            iVar5 = *(int *)(*(int *)(param_2 + 4) + 4);
            uVar1 = __fixsfsi(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
            bVar11 = false;
            local_28 = local_20;
            local_24 = local_1c;
          }
          else {
            pCVar7 = *ppCVar6;
            (**(code **)(*(int *)param_1 + 0x38))(param_1);
            iVar2 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
            uVar8 = *(undefined4 *)(iVar2 + 4);
            iVar2 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
            uVar4 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
            uVar4 = __addsf3(uVar8,uVar4);
            uVar9 = __addsf3(uVar4,DAT_00111908);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
            iVar2 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
            iVar5 = *(int *)(*(int *)(param_2 + 4) + 4);
            uVar9 = __extendsfdf2(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
            __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_001118f8,DAT_001118fc);
            uVar1 = __fixdfsi();
            bVar11 = true;
          }
          Bullet_Draw(pCVar7,pCVar3,local_28,local_24,iVar2,iVar5,(bool)uVar1,bVar11,(void *)0x0);
        }
      }
    }
  }
  return 0;
}



/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00111910  Symbol: Unit_160_Attack_Time */

/* Unit_160_Attack_Time(cocos2d::CCLayer*, _Unit_Stage*, cocos2d::CCNode*) */

undefined4 Unit_160_Attack_Time(CCLayer *param_1,_Unit_Stage *param_2,CCNode *param_3)

{
  undefined uVar1;
  int iVar2;
  CCSprite *pCVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  CCNode **ppCVar7;
  CCNode *pCVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  iVar2 = Unit_Attack_Timeing(param_2);
  if (iVar2 != 0) {
    iVar6 = *(int *)(param_2 + 4);
    uVar10 = __extendsfdf2(*(undefined4 *)(iVar6 + 0x3c));
    uVar11 = __extendsfdf2(*(undefined4 *)(iVar6 + 0x40));
    uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_00111a88,DAT_00111a8c);
    iVar2 = __aeabi_dcmpgt((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                           (int)((ulonglong)uVar11 >> 0x20));
    if (iVar2 != 0) {
      if (*(char *)(iVar6 + 0x2c) == '\0') {
        *(char *)(iVar6 + 0x2c) = '\x01';
        pCVar3 = (CCSprite *)bullet_return(param_1);
        if (pCVar3 != (CCSprite *)0x0) {
          ppCVar7 = *(CCNode ***)(DAT_00111a98 + 0x111970);
          if ((*(int *)(*(int *)(param_2 + 4) + 0x120) == 0) ||
             (iVar2 = Random(0,10), **(int **)(DAT_00111a9c + 0x111982) < iVar2)) {
            pCVar8 = *ppCVar7;
            puVar4 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
            __addsf3(*puVar4,DAT_00111aa0);
            iVar2 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
            uVar9 = *(undefined4 *)(iVar2 + 4);
            iVar2 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
            uVar5 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
            uVar5 = __addsf3(uVar9,uVar5);
            uVar10 = __addsf3(uVar5,DAT_00111aa4);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
            iVar2 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
            iVar6 = *(int *)(*(int *)(param_2 + 4) + 4);
            uVar1 = __fixsfsi(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
            bVar12 = false;
            local_28 = local_20;
            local_24 = local_1c;
          }
          else {
            pCVar8 = *ppCVar7;
            puVar4 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
            __addsf3(*puVar4,DAT_00111aa0);
            iVar2 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
            uVar9 = *(undefined4 *)(iVar2 + 4);
            iVar2 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
            uVar5 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
            uVar5 = __addsf3(uVar9,uVar5);
            uVar10 = __addsf3(uVar5,DAT_00111aa4);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
            iVar2 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
            iVar6 = *(int *)(*(int *)(param_2 + 4) + 4);
            uVar10 = __extendsfdf2(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
            __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_00111a90,DAT_00111a94);
            uVar1 = __fixdfsi();
            bVar12 = true;
          }
          Bullet_Draw(pCVar8,pCVar3,local_28,local_24,iVar2,iVar6,(bool)uVar1,bVar12,(void *)0x0);
        }
      }
    }
  }
  return 0;
}



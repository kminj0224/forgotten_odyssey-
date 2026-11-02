/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00114e10  Symbol: Unit_Live_Collistion_attck */

/* Unit_Live_Collistion_attck(cocos2d::CCLayer*, float, bool, float, bool, int) */

CCObject *
Unit_Live_Collistion_attck
          (CCLayer *param_1,float param_2,bool param_3,float param_4,bool param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  CCArray *this;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  Effect *pEVar10;
  int iVar11;
  int **ppiVar12;
  int iVar13;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar14;
  char in_stack_00000000;
  int in_stack_00000004;
  CCObject *local_48;
  int *local_44;
  int local_40;
  uint local_3c;
  CCObject *local_38;
  int local_2c;
  
  iVar13 = DAT_001150dc;
  iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1,param_3,param_5);
  iVar13 = iVar13 + 0x114e2e;
  ppiVar12 = *(int ***)(iVar13 + DAT_001150e0);
  this = (CCArray *)(**(code **)(**ppiVar12 + 0x58))();
  local_38 = (CCObject *)cocos2d::CCArray::arrayWithCapacity(0x28);
  local_3c = 0;
  local_2c = 0;
  local_48 = (CCObject *)0x0;
  do {
    uVar9 = cocos2d::CCArray::count(this);
    if (uVar9 <= local_3c) {
      if (local_48 == (CCObject *)0x0) {
        cocos2d::CCObject::release(local_38);
        local_38 = local_48;
      }
      return local_38;
    }
    piVar3 = (int *)cocos2d::CCArray::objectAtIndex(this,local_3c);
    iVar4 = (**(code **)(*piVar3 + 0xa0))();
    if ((((((iVar4 + DAT_001150e4 == 0) || (iVar4 + DAT_001150e8 == 0)) ||
          (iVar4 + DAT_001150ec == 0)) ||
         ((iVar4 + DAT_001150f0 == 0 || (iVar4 + DAT_001150f4 == 0)))) ||
        ((iVar4 + DAT_001150f8 == 0 || ((iVar4 + DAT_001150fc == 0 || (iVar4 + DAT_00115100 == 0))))
        )) || ((iVar4 + DAT_00115104 == 0 ||
               (((iVar4 + DAT_00115108 == 0 || (iVar4 == -0x1e)) ||
                (iVar4 = (**(code **)(*piVar3 + 0xa8))(piVar3), iVar4 == 0)))))) goto LAB_001151a2;
    if (in_stack_00000000 == '\0') {
      if ((**(int **)(iVar2 + 4) == **(int **)(iVar4 + 4)) ||
         (iVar5 = Unit_Collision(param_1,(CCLayer *)piVar3,false), iVar5 == 0)) goto LAB_001151a2;
      iVar5 = cocos2d::CCArray::count(*(CCArray **)(*(int *)(iVar2 + 4) + 0x138));
      fVar14 = extraout_s0_01;
      if (iVar5 == 0) {
LAB_0011505a:
        Target_Attack(**(CCLayer ***)(iVar13 + DAT_0011510c),(CCLayer *)piVar3,fVar14);
        if ((*(int *)(*(int *)(iVar2 + 4) + 4) == 4) && (*(int *)(*(int *)(iVar2 + 4) + 100) == 2))
        {
          pEVar10 = *(Effect **)(**(int **)(iVar13 + DAT_00115110) + DAT_00115114);
          local_44 = *ppiVar12;
          puVar7 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
          uVar8 = __mulsf3(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x100),0x3f000000);
          __addsf3(uVar8,*puVar7);
          local_40 = __fixsfsi();
          iVar4 = (**(code **)(*piVar3 + 0x38))(piVar3);
          iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
          iVar5 = (**(code **)(*piVar3 + 0x14))(piVar3);
          iVar11 = 6;
        }
        else {
          pEVar10 = *(Effect **)(**(int **)(iVar13 + DAT_00115110) + DAT_001151cc);
          local_44 = *ppiVar12;
          puVar7 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
          local_40 = __fixsfsi(*puVar7);
          iVar5 = (**(code **)(*piVar3 + 0x38))(piVar3);
          uVar8 = __floatsisf(*(int *)(iVar4 + 0xc) / 2);
          uVar8 = __addsf3(uVar8,*(undefined4 *)(iVar5 + 4));
          __subsf3(uVar8,DAT_001151d0);
          iVar4 = __fixsfsi();
          iVar5 = (**(code **)(*piVar3 + 0x14))(piVar3);
          iVar11 = 0x6e;
        }
        Effect::Effect_Draw(pEVar10,(CCLayer *)local_44,iVar11,local_40,iVar4,iVar5,false);
        cocos2d::CCArray::addObject(*(CCObject **)(*(int *)(iVar2 + 4) + 0x138));
      }
      else {
        bVar1 = false;
        for (local_48 = (CCObject *)0x0;
            uVar9 = cocos2d::CCArray::count(*(CCArray **)(*(int *)(iVar2 + 4) + 0x138)),
            local_48 < uVar9; local_48 = (CCObject *)((int)local_48 + 1)) {
          piVar6 = (int *)cocos2d::CCArray::objectAtIndex
                                    (*(CCArray **)(*(int *)(iVar2 + 4) + 0x138),(uint)local_48);
          if (piVar3 == piVar6) {
            bVar1 = true;
          }
        }
        fVar14 = extraout_s0_02;
        if (!bVar1) goto LAB_0011505a;
      }
      cocos2d::CCArray::addObject(local_38);
      local_2c = local_2c + 1;
      if (in_stack_00000004 <= local_2c) {
        return local_38;
      }
LAB_0011519e:
      local_48 = (CCObject *)0x1;
    }
    else {
      iVar5 = **(int **)(iVar2 + 4);
      if (iVar5 == 2) {
        if (**(int **)(iVar4 + 4) == 0) {
LAB_00114f04:
          iVar5 = Unit_Collision(param_1,(CCLayer *)piVar3,true);
          if (iVar5 != 0) {
            iVar5 = cocos2d::CCArray::count(*(CCArray **)(*(int *)(iVar2 + 4) + 0x138));
            fVar14 = extraout_s0;
            if (iVar5 == 0) {
LAB_00114f5c:
              Target_Attack(**(CCLayer ***)(iVar13 + DAT_0011510c),(CCLayer *)piVar3,fVar14);
              iVar5 = __aeabi_fcmpgt(param_3,0);
              if (iVar5 != 0) {
                pEVar10 = *(Effect **)(**(int **)(iVar13 + DAT_00115110) + DAT_00115114);
                piVar6 = *ppiVar12;
                puVar7 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
                iVar5 = __fixsfsi(*puVar7);
                iVar11 = (**(code **)(*piVar3 + 0x38))(piVar3);
                uVar8 = __floatsisf(*(int *)(iVar4 + 0xc) / 2);
                uVar8 = __addsf3(uVar8,*(undefined4 *)(iVar11 + 4));
                __subsf3(uVar8,DAT_00115118);
                iVar4 = __fixsfsi();
                iVar11 = (**(code **)(*piVar3 + 0x14))(piVar3);
                Effect::Effect_Draw(pEVar10,(CCLayer *)piVar6,0x6e,iVar5,iVar4,iVar11,false);
              }
              cocos2d::CCArray::addObject(*(CCObject **)(*(int *)(iVar2 + 4) + 0x138));
            }
            else {
              bVar1 = false;
              for (local_48 = (CCObject *)0x0;
                  uVar9 = cocos2d::CCArray::count(*(CCArray **)(*(int *)(iVar2 + 4) + 0x138)),
                  local_48 < uVar9; local_48 = (CCObject *)((int)local_48 + 1)) {
                piVar6 = (int *)cocos2d::CCArray::objectAtIndex
                                          (*(CCArray **)(*(int *)(iVar2 + 4) + 0x138),(uint)local_48
                                          );
                if (piVar3 == piVar6) {
                  bVar1 = true;
                }
              }
              fVar14 = extraout_s0_00;
              if (!bVar1) goto LAB_00114f5c;
            }
            cocos2d::CCArray::addObject(local_38);
            goto LAB_0011519e;
          }
        }
      }
      else if ((iVar5 == 0) && (**(int **)(iVar4 + 4) == 2)) goto LAB_00114f04;
    }
LAB_001151a2:
    local_3c = local_3c + 1;
  } while( true );
}



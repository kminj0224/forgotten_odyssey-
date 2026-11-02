/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001151d4  Symbol: Unit_Live_Collistion_attck */

/* Unit_Live_Collistion_attck(cocos2d::CCLayer*, float, bool, float, bool) */

CCObject *
Unit_Live_Collistion_attck(CCLayer *param_1,float param_2,bool param_3,float param_4,bool param_5)

{
  bool bVar1;
  int iVar2;
  CCArray *this;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int **ppiVar11;
  int iVar12;
  float extraout_s0;
  float extraout_s0_00;
  float fVar13;
  float extraout_s0_01;
  float extraout_s0_02;
  char in_stack_00000000;
  Effect *local_44;
  int *local_40;
  int local_3c;
  uint local_38;
  CCObject *local_34;
  
  iVar12 = DAT_001154d8;
  iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1,param_3,param_5);
  iVar12 = iVar12 + 0x1151f2;
  ppiVar11 = *(int ***)(iVar12 + DAT_001154dc);
  this = (CCArray *)(**(code **)(**ppiVar11 + 0x58))();
  local_34 = (CCObject *)cocos2d::CCArray::arrayWithCapacity(0x28);
  local_38 = 0;
  local_44 = (Effect *)0x0;
  do {
    uVar8 = cocos2d::CCArray::count(this);
    if (uVar8 <= local_38) {
      if (local_44 == (Effect *)0x0) {
        cocos2d::CCObject::release(local_34);
        local_34 = (CCObject *)local_44;
      }
      return local_34;
    }
    piVar3 = (int *)cocos2d::CCArray::objectAtIndex(this,local_38);
    iVar4 = (**(code **)(*piVar3 + 0xa0))();
    if ((((((iVar4 + DAT_001154e0 == 0) || (iVar4 + DAT_001154e4 == 0)) ||
          (iVar4 + DAT_001154e8 == 0)) ||
         ((iVar4 + DAT_001154ec == 0 || (iVar4 + DAT_001154f0 == 0)))) ||
        ((iVar4 + DAT_001154f4 == 0 || ((iVar4 + DAT_001154f8 == 0 || (iVar4 + DAT_001154fc == 0))))
        )) || ((iVar4 + DAT_00115500 == 0 ||
               (((iVar4 + DAT_00115504 == 0 || (iVar4 == -0x1e)) ||
                (iVar4 = (**(code **)(*piVar3 + 0xa8))(piVar3), iVar4 == 0)))))) goto LAB_001154ae;
    if (in_stack_00000000 == '\0') {
      if ((**(int **)(iVar2 + 4) == **(int **)(iVar4 + 4)) ||
         (iVar10 = Unit_Collision(param_1,(CCLayer *)piVar3,false), iVar10 == 0)) goto LAB_001154ae;
      iVar10 = cocos2d::CCArray::count(*(CCArray **)(*(int *)(iVar2 + 4) + 0x138));
      fVar13 = extraout_s0_01;
      if (iVar10 == 0) {
LAB_001153b4:
        Target_Attack(**(CCLayer ***)(iVar12 + DAT_00115508),(CCLayer *)piVar3,fVar13);
        iVar10 = *piVar3;
        if ((*(int *)(*(int *)(iVar2 + 4) + 4) == 4) && (*(int *)(*(int *)(iVar2 + 4) + 100) == 2))
        {
          local_44 = *(Effect **)(**(int **)(iVar12 + DAT_0011550c) + DAT_00115510);
          local_40 = *ppiVar11;
          puVar6 = (undefined4 *)(**(code **)(iVar10 + 0x38))(piVar3);
          uVar7 = __mulsf3(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x100),0x3f000000);
          __addsf3(uVar7,*puVar6);
          local_3c = __fixsfsi();
          iVar4 = (**(code **)(*piVar3 + 0x38))(piVar3);
          iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
          iVar10 = (**(code **)(*piVar3 + 0x14))(piVar3);
          iVar9 = 6;
        }
        else {
          local_44 = *(Effect **)(**(int **)(iVar12 + DAT_0011550c) + DAT_00115510);
          local_40 = *ppiVar11;
LAB_00115442:
          puVar6 = (undefined4 *)(**(code **)(iVar10 + 0x38))(piVar3);
          local_3c = __fixsfsi(*puVar6);
          iVar10 = (**(code **)(*piVar3 + 0x38))(piVar3);
          uVar7 = __floatsisf(*(int *)(iVar4 + 0xc) / 2);
          uVar7 = __addsf3(uVar7,*(undefined4 *)(iVar10 + 4));
          __subsf3(uVar7,DAT_00115514);
          iVar4 = __fixsfsi();
          iVar10 = (**(code **)(*piVar3 + 0x14))(piVar3);
          iVar9 = 0x6e;
        }
        Effect::Effect_Draw(local_44,(CCLayer *)local_40,iVar9,local_3c,iVar4,iVar10,false);
LAB_00115496:
        cocos2d::CCArray::addObject(*(CCObject **)(*(int *)(iVar2 + 4) + 0x138));
      }
      else {
        bVar1 = false;
        for (local_44 = (Effect *)0x0;
            uVar8 = cocos2d::CCArray::count(*(CCArray **)(*(int *)(iVar2 + 4) + 0x138)),
            local_44 < uVar8; local_44 = (Effect *)((int)local_44 + 1)) {
          piVar5 = (int *)cocos2d::CCArray::objectAtIndex
                                    (*(CCArray **)(*(int *)(iVar2 + 4) + 0x138),(uint)local_44);
          if (piVar3 == piVar5) {
            bVar1 = true;
          }
        }
        fVar13 = extraout_s0_02;
        if (!bVar1) goto LAB_001153b4;
      }
LAB_001154a2:
      cocos2d::CCArray::addObject(local_34);
      local_44 = (Effect *)0x1;
    }
    else {
      iVar10 = **(int **)(iVar2 + 4);
      if (iVar10 == 2) {
        if (**(int **)(iVar4 + 4) == 0) {
LAB_001152c4:
          iVar10 = Unit_Collision(param_1,(CCLayer *)piVar3,true);
          if (iVar10 != 0) {
            iVar10 = cocos2d::CCArray::count(*(CCArray **)(*(int *)(iVar2 + 4) + 0x138));
            fVar13 = extraout_s0;
            if (iVar10 != 0) {
              bVar1 = false;
              for (local_44 = (Effect *)0x0;
                  uVar8 = cocos2d::CCArray::count(*(CCArray **)(*(int *)(iVar2 + 4) + 0x138)),
                  local_44 < uVar8; local_44 = (Effect *)((int)local_44 + 1)) {
                piVar5 = (int *)cocos2d::CCArray::objectAtIndex
                                          (*(CCArray **)(*(int *)(iVar2 + 4) + 0x138),(uint)local_44
                                          );
                if (piVar3 == piVar5) {
                  bVar1 = true;
                }
              }
              fVar13 = extraout_s0_00;
              if (bVar1) goto LAB_001154a2;
            }
            Target_Attack(**(CCLayer ***)(iVar12 + DAT_00115508),(CCLayer *)piVar3,fVar13);
            iVar10 = __aeabi_fcmpgt(param_3,0);
            if (iVar10 != 0) {
              local_44 = *(Effect **)(**(int **)(iVar12 + DAT_0011550c) + DAT_00115510);
              local_40 = *ppiVar11;
              iVar10 = *piVar3;
              goto LAB_00115442;
            }
            goto LAB_00115496;
          }
        }
      }
      else if ((iVar10 == 0) && (**(int **)(iVar4 + 4) == 2)) goto LAB_001152c4;
    }
LAB_001154ae:
    local_38 = local_38 + 1;
  } while( true );
}



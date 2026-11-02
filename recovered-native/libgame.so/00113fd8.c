/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00113fd8  Symbol: Unit_Live_Collistion_attck */

/* Unit_Live_Collistion_attck(cocos2d::CCLayer*, float, int) */

CCObject * Unit_Live_Collistion_attck(CCLayer *param_1,float param_2,int param_3)

{
  int iVar1;
  CCArray *this;
  CCObject *pCVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  Effect *this_00;
  uint in_r2;
  int iVar9;
  int **ppiVar10;
  float extraout_s0;
  float extraout_s0_00;
  float fVar11;
  uint local_44;
  int *local_3c;
  int local_38;
  uint local_34;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  ppiVar10 = *(int ***)(DAT_00114230 + 0x113ff2);
  this = (CCArray *)(**(code **)(**ppiVar10 + 0x58))();
  pCVar2 = (CCObject *)cocos2d::CCArray::arrayWithCapacity(in_r2);
  local_44 = 0;
  local_34 = 0;
  while ((uVar8 = cocos2d::CCArray::count(this), local_44 < uVar8 && (local_34 != in_r2))) {
    piVar3 = (int *)cocos2d::CCArray::objectAtIndex(this,local_44);
    iVar4 = (**(code **)(*piVar3 + 0xa0))();
    if (((((iVar4 + DAT_00114234 != 0) && (iVar4 + DAT_00114238 != 0)) &&
         (iVar4 + DAT_0011423c != 0)) &&
        ((((iVar4 + DAT_00114240 != 0 && (iVar4 + DAT_00114244 != 0)) &&
          ((iVar4 + DAT_00114248 != 0 &&
           ((iVar4 + DAT_0011424c != 0 && (iVar4 + DAT_00114250 != 0)))))) &&
         (iVar4 + DAT_00114254 != 0)))) &&
       ((((iVar4 + DAT_00114258 != 0 && (iVar4 != -0x1e)) &&
         (iVar4 = (**(code **)(*piVar3 + 0xa8))(piVar3), iVar4 != 0)) &&
        ((**(int **)(iVar1 + 4) != **(int **)(iVar4 + 4) &&
         (iVar5 = Unit_Collision(param_1,(CCLayer *)piVar3,false), iVar5 != 0)))))) {
      fVar11 = extraout_s0;
      if (**(int **)(iVar4 + 4) == 2) {
        __aeabi_fcmpeq(param_3,0x3f800000);
        fVar11 = extraout_s0_00;
      }
      Target_Attack(param_1,(CCLayer *)piVar3,fVar11);
      iVar5 = (*(int **)(iVar1 + 4))[1];
      if (iVar5 != 0xb4) {
        iVar9 = *piVar3;
        if (**(int **)(iVar1 + 4) == 2) {
          this_00 = *(Effect **)(**(int **)(DAT_0011425c + 0x114102) + DAT_00114260);
          local_3c = *ppiVar10;
          puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x38))(piVar3);
          local_38 = __fixsfsi(*puVar6);
          iVar5 = (**(code **)(*piVar3 + 0x38))(piVar3);
          uVar7 = __floatsisf(*(int *)(iVar4 + 0xc) / 2);
          uVar7 = __addsf3(uVar7,*(undefined4 *)(iVar5 + 4));
          __subsf3(uVar7,DAT_00114264);
          iVar4 = __fixsfsi();
          iVar9 = (**(code **)(*piVar3 + 0x14))(piVar3);
          iVar5 = 0x6e;
        }
        else {
          this_00 = *(Effect **)(**(int **)(DAT_0011425c + 0x114102) + DAT_00114260);
          if (iVar5 == 0x104) {
            local_3c = *ppiVar10;
            puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x38))(piVar3);
            local_38 = __fixsfsi(*puVar6);
            iVar9 = (**(code **)(*piVar3 + 0x38))(piVar3);
            uVar7 = __floatsisf(*(int *)(iVar4 + 0xc) / 2);
            __addsf3(uVar7,*(undefined4 *)(iVar9 + 4));
          }
          else {
            local_3c = *ppiVar10;
            puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x38))(piVar3);
            local_38 = __fixsfsi(*puVar6);
            iVar9 = (**(code **)(*piVar3 + 0x38))(piVar3);
            uVar7 = __floatsisf(*(int *)(iVar4 + 0xc) / 2);
            uVar7 = __addsf3(uVar7,*(undefined4 *)(iVar9 + 4));
            __subsf3(uVar7,DAT_00114264);
          }
          iVar4 = __fixsfsi();
          iVar9 = (**(code **)(*piVar3 + 0x14))(piVar3);
        }
        Effect::Effect_Draw(this_00,(CCLayer *)local_3c,iVar5,local_38,iVar4,iVar9,false);
      }
      cocos2d::CCArray::addObject(pCVar2);
      local_34 = local_34 + 1;
    }
    local_44 = local_44 + 1;
  }
  return pCVar2;
}



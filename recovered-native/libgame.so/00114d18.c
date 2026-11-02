/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00114d18  Symbol: Unit_Live_Collistion_attck */

/* Unit_Live_Collistion_attck(cocos2d::CCLayer*, float) */

undefined8 Unit_Live_Collistion_attck(CCLayer *param_1,float param_2)

{
  int iVar1;
  CCArray *this;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_r1;
  uint uVar5;
  float extraout_s0;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  this = (CCArray *)(**(code **)(***(int ***)(DAT_00114de4 + 0x114d30) + 0x58))();
  for (uVar5 = 0; uVar4 = cocos2d::CCArray::count(this), uVar5 < uVar4; uVar5 = uVar5 + 1) {
    piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar5);
    iVar3 = (**(code **)(*piVar2 + 0xa0))();
    if (((((iVar3 + DAT_00114de8 != 0) && (iVar3 + DAT_00114dec != 0)) &&
         (iVar3 + DAT_00114df0 != 0)) &&
        ((((iVar3 + DAT_00114df4 != 0 && (iVar3 + DAT_00114df8 != 0)) &&
          ((iVar3 + DAT_00114dfc != 0 &&
           ((iVar3 + DAT_00114e00 != 0 && (iVar3 + DAT_00114e04 != 0)))))) &&
         (iVar3 + DAT_00114e08 != 0)))) &&
       ((((iVar3 + DAT_00114e0c != 0 && (iVar3 != -0x1e)) &&
         (iVar3 = (**(code **)(*piVar2 + 0xa8))(piVar2), iVar3 != 0)) &&
        ((**(int **)(iVar1 + 4) != **(int **)(iVar3 + 4) &&
         (iVar3 = Unit_Collision(param_1,(CCLayer *)piVar2,false), iVar3 != 0)))))) {
      Target_Attack(param_1,(CCLayer *)piVar2,extraout_s0);
    }
  }
  return CONCAT44(in_r1,this);
}



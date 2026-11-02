/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00125930  Symbol: Unit_Layer_Remove */

/* GameScene::Unit_Layer_Remove() */

undefined8 __thiscall GameScene::Unit_Layer_Remove(GameScene *this)

{
  CCArray *this_00;
  uint uVar1;
  int *this_01;
  int iVar2;
  void *pvVar3;
  CParticle *this_02;
  int iVar4;
  int **ppiVar5;
  
  ppiVar5 = *(int ***)(DAT_00125ad4 + 0x125938);
  this_00 = (CCArray *)(**(code **)(**ppiVar5 + 0x58))();
  if (this_00 != (CCArray *)0x0) {
    uVar1 = cocos2d::CCArray::count(this_00);
LAB_00125ab6:
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      this_01 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar1);
      iVar4 = DAT_00125ad8;
      if (((((this_01 != (int *)0x0) &&
            (iVar2 = (**(code **)(*this_01 + 0xa0))(this_01), iVar2 != iVar4)) &&
           (iVar2 = (**(code **)(*this_01 + 0xa0))(this_01), iVar2 != DAT_00125adc)) &&
          ((iVar2 = (**(code **)(*this_01 + 0xa0))(this_01), iVar2 != 0x3e4 &&
           (iVar2 = (**(code **)(*this_01 + 0xa0))(this_01), iVar2 != DAT_00125ae0)))) &&
         ((iVar2 = (**(code **)(*this_01 + 0xa0))(this_01), iVar2 != iVar4 &&
          (iVar4 = (**(code **)(*this_01 + 0xa0))(this_01), iVar4 != -0x1e))))
      goto code_r0x001259c8;
      iVar4 = (**(code **)(*this_01 + 0xa0))(this_01);
      if (iVar4 == -0x1e) {
        pvVar3 = (void *)(**(code **)(*this_01 + 0xa8))(this_01);
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this_01,true);
      }
      else {
        iVar4 = (**(code **)(*this_01 + 0xa0))(this_01);
        if ((iVar4 == 0x3e4) ||
           (iVar4 = (**(code **)(*this_01 + 0xa0))(this_01), iVar4 == DAT_00125ae0))
        goto LAB_00125aac;
        iVar4 = (**(code **)(*this_01 + 0xa0))(this_01);
        if (iVar4 == DAT_00125adc) {
          pvVar3 = (void *)(**(code **)(*this_01 + 0xa8))(this_01);
          operator_delete(pvVar3);
        }
        else {
          iVar4 = (**(code **)(*this_01 + 0xa0))(this_01);
          if (iVar4 != DAT_00125ad8) goto LAB_00125aac;
          this_02 = (CParticle *)(**(code **)(*this_01 + 0xa8))(this_01);
          if (this_02 != (CParticle *)0x0) {
            CParticle::~CParticle(this_02);
            operator_delete(this_02);
          }
          (**(code **)(*this_01 + 0xac))(this_01,0);
        }
        (**(code **)(**ppiVar5 + 0xd0))(*ppiVar5,this_01,1);
      }
    }
  }
  return CONCAT44(this_00,this);
code_r0x001259c8:
  iVar4 = (**(code **)(*this_01 + 0xa8))(this_01);
  if ((iVar4 != 0) && (**(uint **)(iVar4 + 4) < 2)) {
    (**(code **)(**ppiVar5 + 0xd0))(*ppiVar5,(*(uint **)(iVar4 + 4))[0x46],1);
    iVar2 = *(int *)(*(int *)(iVar4 + 4) + 0x120);
    if (iVar2 != 0) {
      (**(code **)(**ppiVar5 + 0xd0))(*ppiVar5,iVar2,1);
      *(undefined4 *)(*(int *)(iVar4 + 4) + 0x120) = 0;
    }
LAB_00125aac:
    KG_removeChild((CCNode *)this_01,true);
  }
  goto LAB_00125ab6;
}



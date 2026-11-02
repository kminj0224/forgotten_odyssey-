/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00107430  Symbol: KG_Unit_Draw */

/* KG_Unit_Draw(cocos2d::CCNode*, int) */

void KG_Unit_Draw(CCNode *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *this;
  undefined4 uVar3;
  CCNode *this_00;
  CCArray *this_01;
  int *piVar4;
  CCTexture2D *pCVar5;
  int *piVar6;
  uint uVar7;
  _Unit_Stage *__dest;
  int iVar8;
  void *__src;
  _KG_Unit_State *this_02;
  code *pcVar9;
  int *piVar10;
  undefined uVar11;
  uint local_2c;
  
  uVar1 = __mulsf3(*(undefined4 *)(*(int *)(DAT_00107668 + 0x10743c) + 4),0x3f000000);
  uVar1 = __addsf3(uVar1,DAT_0010766c);
  Random(-0x1e,0x1e);
  uVar2 = __floatsisf();
  uVar1 = __addsf3(uVar1,uVar2);
  if ((param_2 == 0xb4) || (uVar11 = param_2 == 0xaa, (bool)uVar11)) {
    uVar11 = 0x1e;
  }
  this = (int *)operator_new(0x110);
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  piVar10 = **(int ***)(DAT_00107670 + 0x107492);
  uVar2 = __subsf3(DAT_00107674,uVar1);
  uVar3 = __floatsisf(uVar11);
  __addsf3(uVar2,uVar3);
  uVar2 = __fixsfsi();
  (**(code **)(*piVar10 + 0xcc))(piVar10,this,uVar2,param_2);
  cocos2d::CCObject::release((CCObject *)this);
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag(param_1,param_2);
  piVar10 = (int *)cocos2d::CCNode::getChildByTag(this_00,param_2);
  this_01 = (CCArray *)(**(code **)(*piVar10 + 0x58))();
  for (local_2c = 0; uVar7 = cocos2d::CCArray::count(this_01), local_2c < uVar7;
      local_2c = local_2c + 1) {
    piVar4 = (int *)cocos2d::CCArray::objectAtIndex(this_01,local_2c);
    pCVar5 = (CCTexture2D *)(**(code **)(*piVar4 + 0x118))();
    piVar6 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar5);
    pcVar9 = *(code **)(*piVar6 + 0x3c);
    uVar2 = (**(code **)(*piVar4 + 0x38))(piVar4);
    (*pcVar9)(piVar6,uVar2);
    pcVar9 = *(code **)(*piVar6 + 0xec);
    uVar2 = (**(code **)(*piVar4 + 0xe8))(piVar4);
    (*pcVar9)(piVar6,uVar2);
    pcVar9 = *(code **)(*piVar6 + 0x2c);
    uVar2 = (**(code **)(*piVar4 + 0x28))(piVar4);
    (*pcVar9)(piVar6,uVar2);
    pcVar9 = *(code **)(*piVar6 + 0x34);
    uVar2 = (**(code **)(*piVar4 + 0x30))(piVar4);
    (*pcVar9)(piVar6,uVar2);
    (**(code **)(*this + 0xcc))(this,piVar6,local_2c,local_2c);
  }
  __dest = (_Unit_Stage *)operator_new(0x24);
  iVar8 = (**(code **)(*piVar10 + 0xa8))(piVar10);
  __src = (void *)(**(code **)(*piVar10 + 0xa8))(piVar10);
  memcpy(__dest,__src,0x24);
  this_02 = (_KG_Unit_State *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State(this_02);
  *(_KG_Unit_State **)(__dest + 4) = this_02;
  Init_Unit_Stage(__dest);
  (**(code **)(*this + 0xac))(this,__dest);
  *(int *)(*(int *)(__dest + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(__dest + 4) + 0x54) = uVar1;
  *(undefined *)(*(int *)(__dest + 4) + 0xd) = 0;
  *(undefined4 *)(*(int *)(__dest + 4) + 100) = 0;
  **(undefined4 **)(__dest + 4) = 0;
  *(undefined *)(*(int *)(__dest + 4) + 0x2c) = 0;
  *(undefined4 *)(*(int *)(__dest + 4) + 0x50) = 0;
  if (param_2 == 0xa0) {
    unit_160_State(__dest);
  }
  else if (param_2 < 0xa1) {
    if (param_2 == 0x78) {
      unit_120_State(__dest);
    }
    else if (param_2 == 0x82) {
      unit_130_State(__dest);
    }
    else if (param_2 == 0x6e) {
      unit_110_State(__dest);
    }
  }
  else if (param_2 == 0xb4) {
    unit_180_State(__dest);
  }
  else if (param_2 < 0xb5) {
    if (param_2 == 0xaa) {
      unit_170_State(__dest);
    }
  }
  else if (param_2 == 0xe6) {
    unit_230_State(__dest);
  }
  else if (param_2 == 0x104) {
    unit_260_State(__dest);
  }
  *(undefined4 *)(*(int *)(__dest + 4) + 0x40) = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x40);
  ani_Move_ani((CCLayer *)this);
  return;
}



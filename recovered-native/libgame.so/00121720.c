/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00121720  Symbol: Lode_Unit */

/* GameScene::Lode_Unit() */

undefined8 __thiscall GameScene::Lode_Unit(GameScene *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = DAT_00121af0 + 0x12172c;
  piVar5 = *(int **)(iVar1 + DAT_00121af4);
  piVar3 = *(int **)(iVar1 + DAT_00121af8);
  if (*(char *)(*piVar5 + *piVar3 * 9 + DAT_00121afc) != '\0') {
    piVar2 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
    iVar4 = *(int *)(iVar1 + DAT_00121b00);
    *piVar2 = iVar4 + 8;
    piVar2[0x3f] = iVar4 + 0x13c;
    piVar2[0x40] = iVar4 + 0x16c;
    piVar2[0x41] = iVar4 + 0x178;
    Unit1::Unit_init_layer((Unit1 *)piVar2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    (**(code **)(*piVar2 + 0x3c))(piVar2,this + DAT_00121b04);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,0x6e,0x6e);
    cocos2d::CCObject::release((CCObject *)piVar2);
  }
  if (*(char *)(*piVar5 + *piVar3 * 9 + DAT_00121b08) != '\0') {
    piVar2 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
    iVar4 = *(int *)(iVar1 + DAT_00121b0c);
    *piVar2 = iVar4 + 8;
    piVar2[0x3f] = iVar4 + 0x13c;
    piVar2[0x40] = iVar4 + 0x16c;
    piVar2[0x41] = iVar4 + 0x178;
    Unit120::Unit_init_layer((Unit120 *)piVar2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    (**(code **)(*piVar2 + 0x3c))(piVar2,this + DAT_00121b04);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,0x78,0x78);
    cocos2d::CCObject::release((CCObject *)piVar2);
  }
  if (*(char *)(*piVar5 + *piVar3 * 9 + DAT_00121b10) != '\0') {
    piVar2 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
    iVar4 = *(int *)(iVar1 + DAT_00121b14);
    *piVar2 = iVar4 + 8;
    piVar2[0x3f] = iVar4 + 0x13c;
    piVar2[0x40] = iVar4 + 0x16c;
    piVar2[0x41] = iVar4 + 0x178;
    Unit2::Unit_init_layer((Unit2 *)piVar2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    (**(code **)(*piVar2 + 0x3c))(piVar2,this + DAT_00121b04);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,0x82,0x82);
    cocos2d::CCObject::release((CCObject *)piVar2);
  }
  if (*(char *)(*piVar5 + *piVar3 * 9 + DAT_00121b18) != '\0') {
    piVar2 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
    iVar4 = *(int *)(iVar1 + DAT_00121b1c);
    *piVar2 = iVar4 + 8;
    piVar2[0x3f] = iVar4 + 0x13c;
    piVar2[0x40] = iVar4 + 0x16c;
    piVar2[0x41] = iVar4 + 0x178;
    Unit150::Unit_init_layer((Unit150 *)piVar2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    (**(code **)(*piVar2 + 0x3c))(piVar2,this + DAT_00121b04);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,0x96,0x96);
    cocos2d::CCObject::release((CCObject *)piVar2);
  }
  if (*(char *)(*piVar5 + *piVar3 * 9 + DAT_00121b20) != '\0') {
    piVar2 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
    iVar4 = *(int *)(iVar1 + DAT_00121b24);
    *piVar2 = iVar4 + 8;
    piVar2[0x3f] = iVar4 + 0x13c;
    piVar2[0x40] = iVar4 + 0x16c;
    piVar2[0x41] = iVar4 + 0x178;
    Unit3::Unit_init_layer((Unit3 *)piVar2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    (**(code **)(*piVar2 + 0x3c))(piVar2,this + DAT_00121b04);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,0xa0,0xa0);
    cocos2d::CCObject::release((CCObject *)piVar2);
  }
  if (*(char *)(*piVar5 + *piVar3 * 9 + DAT_00121b28) != '\0') {
    piVar2 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
    iVar4 = *(int *)(iVar1 + DAT_00121b2c);
    *piVar2 = iVar4 + 8;
    piVar2[0x3f] = iVar4 + 0x13c;
    piVar2[0x40] = iVar4 + 0x16c;
    piVar2[0x41] = iVar4 + 0x178;
    Unit4::Unit_init_layer((Unit4 *)piVar2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    (**(code **)(*piVar2 + 0x3c))(piVar2,this + DAT_00121b04);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,0xaa,0xaa);
    cocos2d::CCObject::release((CCObject *)piVar2);
  }
  if (*(char *)(*piVar5 + *piVar3 * 9 + DAT_00121b30) != '\0') {
    piVar2 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
    iVar4 = *(int *)(iVar1 + DAT_00121b34);
    *piVar2 = iVar4 + 8;
    piVar2[0x3f] = iVar4 + 0x13c;
    piVar2[0x40] = iVar4 + 0x16c;
    piVar2[0x41] = iVar4 + 0x178;
    Unit5::Unit_init_layer((Unit5 *)piVar2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    (**(code **)(*piVar2 + 0x3c))(piVar2,this + DAT_00121b04);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,0xb4,0xb4);
    cocos2d::CCObject::release((CCObject *)piVar2);
    Effect::Effect_init(*(Effect **)(this + DAT_00121b38),0xb4);
  }
  if (*(char *)(*piVar5 + *piVar3 * 9 + DAT_00121b3c) != '\0') {
    piVar2 = (int *)operator_new(0x140);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
    iVar4 = *(int *)(iVar1 + DAT_00121b40);
    *piVar2 = iVar4 + 8;
    piVar2[0x3f] = iVar4 + 0x13c;
    piVar2[0x40] = iVar4 + 0x16c;
    piVar2[0x41] = iVar4 + 0x178;
    Unit6::Unit_init_layer((Unit6 *)piVar2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    (**(code **)(*piVar2 + 0x3c))(piVar2,this + DAT_00121bf4);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,0xe6,0xe6);
    cocos2d::CCObject::release((CCObject *)piVar2);
  }
  if (*(char *)(*piVar5 + *piVar3 * 9 + DAT_00121bf8) != '\0') {
    piVar5 = (int *)operator_new(0x130);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar5);
    iVar4 = *(int *)(iVar1 + DAT_00121bfc);
    *piVar5 = iVar4 + 8;
    piVar5[0x3f] = iVar4 + 0x13c;
    piVar5[0x40] = iVar4 + 0x16c;
    piVar5[0x41] = iVar4 + 0x178;
    Unit7::Unit_init_layer((Unit7 *)piVar5);
    (**(code **)(*piVar5 + 0x6c))(piVar5,0);
    (**(code **)(*piVar5 + 0x3c))(piVar5,this + DAT_00121bf4);
    (**(code **)(*(int *)this + 0xcc))(this,piVar5,0x104,0x104);
    cocos2d::CCObject::release((CCObject *)piVar5);
  }
  return CONCAT44(piVar3,iVar1);
}



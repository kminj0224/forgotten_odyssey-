/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001184bc  Symbol: Draw_SiegeTank */

/* Draw_SiegeTank(cocos2d::CCNode*, int) */

void Draw_SiegeTank(CCNode *param_1,int param_2)

{
  int *this;
  int iVar1;
  
  if (param_2 == DAT_00118530) {
    this = (int *)operator_new(0x110);
    cocos2d::CCLayer::CCLayer((CCLayer *)this);
    iVar1 = *(int *)(DAT_00118534 + 0x1184e0);
    *this = iVar1 + 8;
    this[0x3f] = iVar1 + 0x13c;
    this[0x40] = iVar1 + 0x16c;
    this[0x41] = iVar1 + 0x178;
    SiegeTank9000::Unit_init_layer();
    (**(code **)(***(int ***)(DAT_00118538 + 0x11850c) + 0xcc))
              (**(int ***)(DAT_00118538 + 0x11850c),this,0,param_2);
    cocos2d::CCObject::release((CCObject *)this);
    **(int ***)(DAT_0011853c + 0x118528) = this;
    KG_SiegeTank_Draw((CCLayer *)this,param_1);
  }
  return;
}



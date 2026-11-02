/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00122000  Symbol: Effect_Loding */

/* GameScene::Effect_Loding() */

void __thiscall GameScene::Effect_Loding(GameScene *this)

{
  int iVar1;
  Effect *this_00;
  int iVar2;
  
  this_00 = (Effect *)operator_new(0x158);
  iVar1 = DAT_001220d0;
  Effect::Effect(this_00);
  *(Effect **)(this + iVar1) = this_00;
  Effect::Effect_init(this_00,1);
  Effect::Effect_init(*(Effect **)(this + iVar1),3);
  Effect::Effect_init(*(Effect **)(this + iVar1),5);
  Effect::Effect_init(*(Effect **)(this + iVar1),DAT_001220d4);
  Effect::Effect_init(*(Effect **)(this + iVar1),0xaf0);
  Effect::Effect_init(*(Effect **)(this + iVar1),DAT_001220d8);
  Effect::Effect_init(*(Effect **)(this + iVar1),DAT_001220dc);
  (**(code **)(**(int **)(this + iVar1) + 0x3c))(*(int **)(this + iVar1),this + DAT_001220e0);
  (**(code **)(**(int **)(this + iVar1) + 0x6c))(*(int **)(this + iVar1),0);
  iVar2 = 0;
  do {
    if (0x14 < *(int *)(**(int **)(DAT_001220e4 + 0x12206e) +
                        **(int **)(DAT_001220e8 + 0x122076) * 0x24 + iVar2 + DAT_001220ec)) {
      Effect::Effect_Lode_Limit(*(Effect **)(this + iVar1));
      break;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x24);
  Effect::Effect_Lode_Attack
            (*(Effect **)(this + iVar1),(char *)(DAT_001220f0 + 0x1220a2),
             (char *)(DAT_001220f4 + 0x1220a4));
  Effect::Effect_Lode_Attack2
            (*(Effect **)(this + iVar1),(char *)(DAT_001220f8 + 0x1220b0),
             (char *)(DAT_001220fc + 0x1220b2));
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + iVar1),1000,1000);
  cocos2d::CCObject::release(*(CCObject **)(this + iVar1));
  return;
}



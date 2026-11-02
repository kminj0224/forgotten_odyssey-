/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001231bc  Symbol: LaverUP */

/* GameScene::LaverUP() */

void GameScene::LaverUP(void)

{
  Hero_Main_Layer *this;
  
  **(undefined4 **)(DAT_001231f0 + 0x1231c6) = 0x1a;
  this = (Hero_Main_Layer *)Hero_Main_Layer::node();
  (**(code **)(***(int ***)(DAT_001231f4 + 0x1231d6) + 0xcc))
            (**(int ***)(DAT_001231f4 + 0x1231d6),this,0x13,0x13);
  Hero_Main_Layer::Hero_Main_Layer_Draw_Num(this,1);
  return;
}



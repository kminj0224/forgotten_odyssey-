/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00123178  Symbol: GameClearend */

/* GameScene::GameClearend() */

void GameScene::GameClearend(void)

{
  int *in_r0;
  undefined4 uVar1;
  
  if (*(int *)(**(int **)(DAT_001231b0 + 0x123184) +
               (**(int **)(DAT_001231b8 + 0x12318c) + DAT_001231b4) * 4 + 4) == 10) {
    uVar1 = Tutorial_Layer::node();
    (**(code **)(*in_r0 + 0xcc))(in_r0,uVar1,0x16,0x16);
  }
  return;
}



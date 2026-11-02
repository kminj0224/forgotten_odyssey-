/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5eb4  Symbol: jpeg_finish_compress */

void jpeg_finish_compress(int *param_1)

{
  int iVar1;
  code *pcVar2;
  code **ppcVar3;
  uint uVar4;
  
  if (param_1[5] - 0x65U < 2) {
    if ((uint)param_1[0x41] < (uint)param_1[8]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x45;
      (**(code **)*param_1)();
    }
    (**(code **)(param_1[0x61] + 8))(param_1);
  }
  else if (param_1[5] != 0x67) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  ppcVar3 = (code **)param_1[0x61];
  pcVar2 = ppcVar3[4];
  do {
    if (pcVar2 != (code *)0x0) {
      (**(code **)(param_1[0x65] + 0xc))(param_1);
      (**(code **)(param_1[6] + 0x10))(param_1);
      jpeg_abort(param_1);
      return;
    }
    (**ppcVar3)(param_1);
    if (param_1[0x47] != 0) {
      uVar4 = 0;
      do {
        while( true ) {
          if (param_1[2] != 0) {
            *(uint *)(param_1[2] + 4) = uVar4;
            *(int *)(param_1[2] + 8) = param_1[0x47];
            (**(code **)param_1[2])(param_1);
          }
          iVar1 = (**(code **)(param_1[100] + 4))(param_1,0);
          if (iVar1 != 0) break;
          *(undefined4 *)(*param_1 + 0x14) = 0x19;
          uVar4 = uVar4 + 1;
          (**(code **)*param_1)(param_1);
          if ((uint)param_1[0x47] <= uVar4) goto LAB_001a5f4a;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)param_1[0x47]);
    }
LAB_001a5f4a:
    (**(code **)(param_1[0x61] + 8))(param_1);
    ppcVar3 = (code **)param_1[0x61];
    pcVar2 = ppcVar3[4];
  } while( true );
}



#pragma once
#include "defaults.h"

//Generated using a python script.

/*

void UndefinedFunction_1400f2eb0(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 auStack40 [2];
  undefined8 auStack24 [2];

  if (param_1[0xd1e] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar1 == false) {
	  param_1[0xd1e] = 0;
	}
  }
  lVar3 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x13);
  hook(0x14004bd30,param_1);
  lVar4 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x13);
  uVar5 = hookret(0x140056290,(longlong)param_1);
  if (((char)uVar5 != '\0') && (lVar4 == 0)) {
	if ((*(uint *)(param_1 + 0x2a2) & 1) == 0) {
	  if (lVar3 != 0) {
		uVar6 = hookret(0x140004740);
		plVar7 = hookret(0x140131310,uVar6,100,0x13,param_1,4,0xffffffff,&DAT_140d2acf0,&DAT_140d76030 ,4,3
							   ,(longlong *)0x0);
		if (plVar7 != (longlong *)0x0) {
		  (**(code **)(*plVar7 + 0xa8))(plVar7,param_1);
		  hook(0x1400604e0,(longlong)plVar7,param_1);
		  hook(0x140060360,(longlong)plVar7,0x200228e0);
		  plVar8 = (longlong *)hookret(0x140003160);
		  hook(0x14051a6b0,plVar8,0xd,plVar7,0);
		}
		iVar2 = hookret(0x140004a40,(longlong)param_1);
		puVar9 = hookret(0x140004a50,(longlong)param_1,auStack40);
		puVar10 = hookret(0x140003aa0);
		hook(0x1402aad60,(longlong)puVar10,auStack24,puVar9,0xe,(longlong)iVar2,param_1,0,0x3f80000 0,
					  (longlong)param_1);
	  }
	}
	else {
	  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0xfffffffe;
	}
  }
  hook(0x1400f33d0,(longlong)param_1);
  if ((param_1[0xd1e] != 0) && (*(int *)(param_1 + 0x262) == 0x89)) {
	bVar1 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar1 == false) {
	  param_1[0xd1e] = 0;
	}
	plVar7 = (longlong *)param_1[0xd1e];
	if (plVar7 != (longlong *)0x0) {
	  bVar1 = hookret(0x140001b80,(longlong)plVar7);
	  if (bVar1 != false) {
		(**(code **)(*plVar7 + 0x78))(plVar7);
		param_1[0xd1e] = 0;
	  }
	}
  }
  return;



POSTCHARACTER();
}
void FUN_1400d4b30(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_28 [4];
  undefined4 local_18 [4];

  if ((param_1[0xd20] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd20]), bVar1 == false)) {
	param_1[0xd20] = 0;
  }
  hook(0x14004bd30,param_1);
  hook(0x1400d2810,(longlong)param_1);
  if ((*(uint *)((longlong)param_1 + 0x14f4) & 0x2000) == 0) {
	*(undefined4 *)(param_1 + 0xd1e) = 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar3 != 0x28) && (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x29)) &&
	 (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x2a)) {
	return;
  }
  lVar4 = hookret(0x140001a90);
  cVar2 = hookret(0x140038a10,lVar4 + 0x38);
  if (cVar2 != '\0') {
	hookret(0x14000bf40,local_18,&DAT_140d76030);
	hookret(0x14000bf40,local_28,&DAT_140d76030);
	lVar4 = hookret(0x140004740);
	hook(0x140130fa0,lVar4,0x3ed,param_1,param_1,local_18,local_28,0);
  }
  return;



POSTCHARACTER();
}
void FUN_1400cdc90(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;

  plVar5 = param_1 + 0xd1f;
  lVar6 = 6;
  do {
	if ((*plVar5 != 0) && (bVar1 = hookret(0x140001b80,*plVar5), bVar1 == false)) {
	  *plVar5 = 0;
	}
	plVar5 = plVar5 + 1;
	lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),7);
  hook(0x14004bd30,param_1);
  if ((lVar6 != 0) && (lVar6 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),7), lVar6 == 0)) {
	(**(code **)(*param_1 + 0x438))(param_1);
  }
  iVar3 = hookret(0x1400383e0,(longlong)param_1);
  if (iVar3 == 7) {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 0x40000000;
  }
  lVar6 = hookret(0x140056010,(longlong)param_1,0xe);
  if (lVar6 == 0) {
	if ((*(uint *)(param_1 + 0x2a2) & 0x40000000) == 0) {
	  hookret(0x1400cd970,param_1,0xe);
	  goto LAB_1400cdd70;
	}
  }
  else if ((*(uint *)(param_1 + 0x2a2) & 0x40000000) == 0) goto LAB_1400cdd70;
  hook(0x1400ac630,(longlong)param_1,0xe);
LAB_1400cdd70:
  hook(0x1400ce1e0,(longlong)param_1);
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar3 != 0x28) && (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x29)) &&
	 (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x2a)) {
	return;
  }
  lVar6 = hookret(0x140001a90);
  cVar2 = hookret(0x140038a10,lVar6 + 0x38);
  if (cVar2 != '\0') {
	uVar4 = 0x80770e;
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) != 0) {
	  uVar4 = 0x8191ce;
	}
	hook(0x1400ce070,(longlong)param_1,uVar4,0);
  }
  return;



POSTCHARACTER();
}
void FUN_1400cd200(longlong *param_1)

{
PRECHARACTER(param_1);;

  int iVar1;

  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	iVar1 = (**(code **)(*param_1 + 0x180))();
	if ((iVar1 == 0xe1) && ((*(byte *)(param_1 + 0x29f) & 0x20) != 0)) {
	  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 4;
	}
  }
  hook(0x14004bd30,param_1);
  return;


POSTCHARACTER();
}
void FUN_1400ca240(longlong *param_1)

{
PRECHARACTER(param_1);;

  float fVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined6 extraout_var;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float extraout_XMM0_Da;
  undefined8 local_28 [2];
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar3 = hookret(0x140001b80,param_1[0xd1e]), bVar3 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd20] != 0) && (bVar3 = hookret(0x140001b80,param_1[0xd20]), bVar3 == false)) {
	param_1[0xd20] = 0;
  }
  if (((param_1[0xd1e] != 0) && (*(char *)((longlong)param_1 + 0x6909) == '\0')) &&
	 (uVar8 = hookret(0x140056290,(longlong)param_1), (char)uVar8 != '\0')) {
	(**(code **)(*(longlong *)param_1[0xd1e] + 0xe0))();
  }
  if ((param_1[0xd1e] != 0) && (iVar6 = (**(code **)(*param_1 + 0x180))(param_1), iVar6 == 0x1b8) ) {
	if ((param_1[0xd1e] != 0) && (bVar3 = hookret(0x140001b80,param_1[0xd1e]), bVar3 == false)) {
	  param_1[0xd1e] = 0;
	}
	plVar2 = (longlong *)param_1[0xd1e];
	if ((plVar2 != (longlong *)0x0) && (bVar3 = hookret(0x140001b80,(longlong)plVar2), bVar3 != false) ) {
	  (**(code **)(*plVar2 + 0x78))(plVar2);
	  param_1[0xd1e] = 0;
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400caae0,(longlong)param_1);
  if (param_1[0xd20] == 0) {
	lVar9 = hookret(0x14004cab0,(longlong)param_1,0);
	uVar5 = hookret(0x140032f40,lVar9);
	if ((int)CONCAT62(extraout_var,uVar5) == 0x8d) {
	  hookret(0x1400ca7b0,param_1);
	}
  }
  iVar6 = 0;
  if (*(char *)((longlong)param_1 + 0x6914) == '\0') {
	hookret(0x14000cee0,(longlong)param_1);
	fVar1 = *(float *)(param_1 + 0xd22);
	*(float *)(param_1 + 0xd22) = fVar1 - extraout_XMM0_Da;
	if (fVar1 - extraout_XMM0_Da <= 0.0) {
	  lVar9 = hookret(0x140001a90);
	  iVar7 = hookret(0x140221120,lVar9);
	  if ((iVar7 != 1) && (iVar7 != 0xc)) {
		iVar7 = hookret(0x140004a40,(longlong)param_1);
		puVar10 = hookret(0x140004a50,(longlong)param_1,local_18);
		puVar11 = hookret(0x140003aa0);
		hook(0x1402aad60,(longlong)puVar11,local_28,puVar10,*(int *)((longlong)param_1 + 0x690c),
					  (longlong)iVar7,param_1,0,0x3f800000,(longlong)param_1);
	  }
	  if (*(int *)((longlong)param_1 + 0x690c) != 2) {
		iVar6 = *(int *)((longlong)param_1 + 0x690c) + 1;
	  }
	  *(int *)((longlong)param_1 + 0x690c) = iVar6;
	  iVar6 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar6 == 0) {
		*(undefined4 *)(param_1 + 0xd22) = 0x42800000;
	  }
	  else {
		if (0 < iVar6) {
		  if (iVar6 < 3) {
			*(undefined4 *)(param_1 + 0xd22) = 0x42380000;
			goto LAB_1400ca479;
		  }
		  if (iVar6 == 10) {
			*(undefined4 *)(param_1 + 0xd22) = 0x42b80000;
			goto LAB_1400ca479;
		  }
		}
		*(undefined4 *)(param_1 + 0xd22) = 0;
		*(undefined *)((longlong)param_1 + 0x6914) = 1;
	  }
	}
  }
LAB_1400ca479:
  (**(code **)(*param_1 + 0x418))(param_1);
  uVar8 = hookret(0x140056290,(longlong)param_1);
  *(char *)((longlong)param_1 + 0x6909) = (char)uVar8;
  iVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar6 == 0x28) || (iVar6 = (**(code **)(*param_1 + 0x180))(param_1), iVar6 == 0x29)) ||
	 (iVar6 = (**(code **)(*param_1 + 0x180))(param_1), iVar6 == 0x2a)) {
	lVar9 = hookret(0x140001a90);
	cVar4 = hookret(0x140038a10,lVar9 + 0x38);
	if (cVar4 != '\0') {
	  hookret(0x14000bf40,(undefined4 *)local_18,&DAT_140d76030);
	  hookret(0x14000bf40,(undefined4 *)local_28,&DAT_140d76030);
	  lVar9 = hookret(0x140004740);
	  hook(0x140130fa0,lVar9,0x3ed,param_1,param_1,(undefined4 *)local_18,(undefined4 *)local_28,0) ;
	}
  }
  return;


POSTCHARACTER();
}
void UndefinedFunction_1400c84f0(longlong *param_1)

{
PRECHARACTER(param_1);;

  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Db;
  undefined8 auStack88 [2];
  undefined8 auStack72 [2];
  undefined8 auStack56 [6];

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  if ((*(char *)(param_1 + 0xd24) != '\0') &&
	 (lVar6 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x1f), lVar6 == 0)) {
	if ((param_1[0xd23] != 0) && (bVar3 = hookret(0x140001b80,param_1[0xd23]), bVar3 == false)) {
	  param_1[0xd23] = 0;
	}
	plVar1 = (longlong *)param_1[0xd23];
	if ((plVar1 != (longlong *)0x0) && (bVar3 = hookret(0x140001b80,(longlong)plVar1), bVar3 != false) ) {
	  (**(code **)(*plVar1 + 0xd8))(plVar1);
	  param_1[0xd23] = 0;
	}
	*(undefined *)(param_1 + 0xd24) = 0;
	puVar7 = hookret(0x140004a50,(longlong)param_1,auStack88);
	puVar8 = hookret(0x140003aa0);
	hook(0x1402aa5e0,(longlong)puVar8,puVar7,0x22,0xffffffffffffffff);
  }
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar4 != 0xe3) {
	return;
  }
  hook(0x14000cee0,(longlong)param_1);
  fVar10 = extraout_XMM0_Da + *(float *)(param_1 + 0xd27);
  *(float *)(param_1 + 0xd27) = fVar10;
  switch(*(undefined4 *)((longlong)param_1 + 0x693c)) {
  case 0:
	if (fVar10 <= 100.0) {
	  return;
	}
	iVar4 = 0x24;
	break;
  case 1:
	if (fVar10 <= 120.0) {
	  return;
	}
	iVar4 = 0x25;
	break;
  case 2:
	bVar3 = fVar10 == 140.0;
	bVar2 = fVar10 < 140.0;
	goto LAB_1400c8673;
  case 3:
	if (fVar10 <= 160.0) {
	  return;
	}
	iVar4 = 0x24;
	break;
  case 4:
	if (fVar10 <= 180.0) {
	  return;
	}
	iVar4 = 0x25;
	break;
  case 5:
	bVar3 = fVar10 == 200.0;
	bVar2 = fVar10 < 200.0;
LAB_1400c8673:
	if (bVar2 || bVar3) {
	  return;
	}
	iVar4 = 0x26;
	break;
  default:
	goto switchD_1400c8611_caseD_6;
  }
  pfVar9 = (float *)hookret(0x140001b50,(longlong)param_1);
  fVar10 = hookret(0x140455550,-1000.0,1000.0);
  fVar10 = fVar10 + pfVar9[2];
  fVar11 = hookret(0x140455550,-500.0,500.0);
  fVar11 = fVar11 + pfVar9[1];
  fVar12 = hookret(0x140455550,-1000.0,1000.0);
  hook(0x140001030,CONCAT44(extraout_XMM0_Db,fVar12 + *pfVar9),fVar12 + *pfVar9,fVar11,fVar10,
				(undefined4 *)auStack88);
  iVar5 = hookret(0x140004a40,(longlong)param_1);
  puVar7 = hookret(0x140004a50,(longlong)param_1,auStack72);
  puVar8 = hookret(0x140003aa0);
  hook(0x1402aab10,(longlong)puVar8,auStack56,puVar7,iVar4,(longlong)iVar5,(undefined4 *)auStack88,
				0x3f800000,(longlong)param_1);
  *(int *)((longlong)param_1 + 0x693c) = *(int *)((longlong)param_1 + 0x693c) + 1;
switchD_1400c8611_caseD_6:
  return;


POSTCHARACTER();
}
void FUN_1400c4c10(longlong *param_1)

{
PRECHARACTER(param_1);;

  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd1e]), bVar2 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd26] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd26]), bVar2 == false)) {
	param_1[0xd26] = 0;
  }
  plVar5 = param_1 + 0xd1f;
  lVar4 = 2;
  do {
	if ((*plVar5 != 0) && (bVar2 = hookret(0x140001b80,*plVar5), bVar2 == false)) {
	  *plVar5 = 0;
	}
	plVar5 = plVar5 + 1;
	lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar5 = param_1 + 0xd21;
  lVar4 = 5;
  do {
	if ((*plVar5 != 0) && (bVar2 = hookret(0x140001b80,*plVar5), bVar2 == false)) {
	  *plVar5 = 0;
	}
	plVar5 = plVar5 + 1;
	lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar5 = param_1 + 0xd27;
  lVar4 = 3;
  do {
	if ((*plVar5 != 0) && (bVar2 = hookret(0x140001b80,*plVar5), bVar2 == false)) {
	  *plVar5 = 0;
	}
	plVar5 = plVar5 + 1;
	lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400c56b0,param_1);
	hook(0x1400c5ca0,(longlong)param_1);
	hook(0x14004d3e0,(longlong)param_1,(*(byte *)(param_1 + 0x2a2) & 2) != 0,0x6e);
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	if (((iVar3 == 6) && (fVar6 = (float)(**(code **)(*param_1 + 0x160))(param_1), 32.0 < fVar6))  &&
	   (fVar6 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar6 < 37.0)) {
	  uVar1 = (**(code **)(*param_1 + 0x158))(param_1);
	  hook(0x1400693a0,uVar1,(longlong)param_1,0x25);
	  *(uint *)((longlong)param_1 + 0x14f4) = *(uint *)((longlong)param_1 + 0x14f4) & 0xfffffeff;
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400be8f0(longlong *param_1)

{
PRECHARACTER(param_1);;

  float fVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float extraout_XMM0_Da;
  undefined4 uVar8;
  undefined8 local_38 [2];
  undefined8 local_28 [4];

  hook(0x14004bd30,param_1);
  if (param_1[0xd20] != 0) {
	bVar3 = hookret(0x140001b80,param_1[0xd20]);
	if (bVar3 == false) {
	  param_1[0xd20] = 0;
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400bcca0,(longlong)param_1);
	if ((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) {
	  hookret(0x140079c40,(longlong)param_1,0xe);
	}
	else {
	  hook(0x1400bcd00,param_1,0xe);
	}
	uVar8 = 0x3f800000;
	if (*(char *)((longlong)param_1 + 0x68fd) != '\0') {
	  lVar5 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x24);
	  if (lVar5 == 0) {
		if (param_1[0xd20] != 0) {
		  bVar3 = hookret(0x140001b80,param_1[0xd20]);
		  if (bVar3 == false) {
			param_1[0xd20] = 0;
		  }
		}
		plVar2 = (longlong *)param_1[0xd20];
		if (plVar2 != (longlong *)0x0) {
		  bVar3 = hookret(0x140001b80,(longlong)plVar2);
		  if (bVar3 != false) {
			(**(code **)(*plVar2 + 0xd8))(plVar2);
			param_1[0xd20] = 0;
		  }
		}
		*(undefined *)((longlong)param_1 + 0x68fd) = 0;
		(**(code **)(*param_1 + 0x438))(param_1);
		iVar4 = hookret(0x140004a40,(longlong)param_1);
		puVar6 = hookret(0x140004a50,(longlong)param_1,local_38);
		puVar7 = hookret(0x140003aa0);
		hook(0x1402aad60,(longlong)puVar7,local_28,puVar6,0x13,(longlong)iVar4,param_1,0,uVar8,
					  (longlong)param_1);
	  }
	}
	hook(0x1400bf520,(longlong)param_1);
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar4 - 0x17fU < 9) {
	  hook(0x14000cee0,(longlong)param_1);
	  fVar1 = *(float *)(param_1 + 0xd25);
	  *(float *)(param_1 + 0xd25) = extraout_XMM0_Da + fVar1;
	  if (50.0 < extraout_XMM0_Da + fVar1) {
		lVar5 = hookret(0x140001a90);
		iVar4 = hookret(0x140221120,lVar5);
		if ((iVar4 != 1) && (iVar4 != 0xc)) {
		  iVar4 = hookret(0x140004a40,(longlong)param_1);
		  puVar6 = hookret(0x140004a50,(longlong)param_1,local_28);
		  puVar7 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar7,local_38,puVar6,3,(longlong)iVar4,param_1,0,uVar8,
						(longlong)param_1);
		}
		*(undefined4 *)(param_1 + 0xd25) = 0;
	  }
	}
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if ((iVar4 == 0xe0) && ((*(uint *)(param_1 + 0x29f) & 0x2000000) != 0)) {
	  hookret(0x1400bce90,(longlong)param_1,'\0');
	}
  }
  return;


POSTCHARACTER();
}
void UndefinedFunction_1400bbba0(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  bool bVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar20;
  undefined4 uVar21;
  undefined8 uStack104;
  float fStack96;
  undefined4 auStack88 [8];

  plVar15 = param_1 + 0xd1f;
  lVar17 = 3;
  do {
	if ((*plVar15 != 0) && (bVar5 = hookret(0x140001b80,*plVar15), bVar5 == false)) {
	  *plVar15 = 0;
	}
	plVar15 = plVar15 + 1;
	lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if ((param_1[0xd22] != 0) && (bVar5 = hookret(0x140001b80,param_1[0xd22]), bVar5 == false)) {
	param_1[0xd22] = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x29f);
  iVar9 = *(int *)(param_1 + 0x2a2);
  hook(0x14004bd30,param_1);
  iVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar7 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400b9b30,(longlong)param_1);
  hook(0x1400b9ad0,(longlong)param_1);
  uVar2 = *(uint *)(param_1 + 0x29f);
  lVar17 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x12);
  if (lVar17 == 0) {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0x7fffffff;
  }
  else {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 0x80000000;
  }
  bVar5 = false;
  if (((*(uint *)((longlong)param_1 + 0x14f4) & 0x20) == 0) &&
	 ((*(byte *)(param_1 + 0x29f) & 4) == 0)) {
	bVar3 = false;
  }
  else {
	bVar3 = true;
  }
  uVar18 = *(uint *)((longlong)param_1 + 0x14f4) >> 0x15;
  iVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  uVar8 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar8 != '\0') {
	hookret(0x1400bc8a0,(longlong)param_1);
  }
  bVar19 = (*(uint *)(param_1 + 0x2a1) & 0x100000) == 0;
  if (!bVar19) {
	hook(0x1400b9b80,param_1,0x13);
  }
  if ((*(uint *)(param_1 + 0x2a2) & 0x80000000) == 0) {
	bVar5 = true;
	bVar4 = true;
	hook(0x1400b9b80,param_1,0x11);
	if (iVar9 < 0) {
	  iVar9 = hookret(0x140004a40,(longlong)param_1);
	  puVar11 = hookret(0x140004a50,(longlong)param_1,&uStack104);
	  puVar12 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar12,puVar11,0x10,(longlong)iVar9);
	  hook(0x1400239c0,&uStack104,0xffffffffffffffff);
	  thunk_hook(0x14000b010,(longlong)(param_1 + 0xd24),(longlong)&uStack104);
	}
	iVar9 = hookret(0x140684ea0,(longlong)(param_1 + 0x2a6));
	if (iVar9 != 0) {
	  hookret(0x140031810,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),(longlong)(param_1 + 0x2a6 ),0,
					'\0');
	}
	hook(0x1400bb910,(longlong)param_1,0xe);
	bVar3 = false;
LAB_1400bbe8e:
	hook(0x1400bb910,(longlong)param_1,0xf);
	if (bVar5) {
	  hook(0x1400bb910,(longlong)param_1,0x10);
	}
	if (!bVar3) goto LAB_1400bbec4;
  }
  else {
	uVar10 = hookret(0x140056290,(longlong)param_1);
	if ((char)uVar10 == '\0') {
	  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0x7fffffff;
	}
	if (((bVar3) || ((uVar18 & 1) != 0)) || (iVar7 == 0x1b8)) {
	  bVar4 = true;
	}
	else {
	  bVar4 = false;
	}
	hook(0x1400b9b80,param_1,0xe);
	hook(0x1400b9b80,param_1,0xf);
	hook(0x1400b9b80,param_1,0x10);
	if (((!bVar3) && ((uVar18 & 1) == 0)) && (iVar7 != 0x1b8)) {
	  hook(0x1400b9b80,param_1,0x15);
	}
	bVar3 = true;
	iVar9 = hookret(0x140684ea0,(longlong)(param_1 + 0x2a6));
	if (iVar9 != 1) {
	  hookret(0x140031810,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),(longlong)(param_1 + 0x2a6),1,'\ 0');
	}
	if (((byte)(uVar1 >> 0x16) & 1) != ((byte)(uVar2 >> 0x16) & 1)) goto LAB_1400bbe8e;
  }
  hook(0x1400bb910,(longlong)param_1,0x11);
LAB_1400bbec4:
  if (bVar19) {
	hook(0x1400bb910,(longlong)param_1,0x13);
  }
  if (bVar4) {
	hook(0x1400bb910,(longlong)param_1,0x15);
  }
  hook(0x14000bf40,(undefined4 *)&uStack104,&DAT_140d76030);
  iVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar9 == 0x28) || (iVar9 = (**(code **)(*param_1 + 0x180))(param_1), iVar9 == 0x29)) ||
	 (iVar9 = (**(code **)(*param_1 + 0x180))(param_1), iVar9 == 0x2a)) {
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  fVar20 = -15.0;
	}
	else {
	  fVar20 = 15.0;
	}
	iVar9 = (**(code **)(*param_1 + 0x180))(param_1);
	lVar17 = hookret(0x140001a90);
	cVar6 = hookret(0x140038a10,lVar17 + 0x38);
	if (cVar6 != '\0') {
	  pfVar13 = (float *)hookret(0x140001030,0x3c8efa35,(float)uStack104 * 0.01745329,fVar20 * 0.017453 29,
									   fStack96 * 0.01745329,auStack88);
	  hook(0x140455840,(float *)&uStack104,pfVar13);
	  uVar14 = hookret(0x140004740);
	  if (iVar9 == 0x29) {
		uVar21 = 2;
	  }
	  else {
		uVar21 = 1;
	  }
	  plVar15 = hookret(0x140131410,uVar14,100,0x1e,param_1,uVar21,0xffffffff,(undefined4 *)&uStack104 ,
							  param_1,0xffffffff,&DAT_140d76030,4,3,(longlong *)0x0);
	  if (plVar15 != (longlong *)0x0) {
		(**(code **)(*plVar15 + 0xa8))(plVar15,param_1);
		hook(0x1400604e0,(longlong)plVar15,param_1);
		hook(0x140060360,(longlong)plVar15,0xc0);
		hook(0x140077ac0,(longlong)plVar15,0x40);
		plVar16 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar16,0xd,plVar15,0);
	  }
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400f0d70(longlong *param_1)

{
PRECHARACTER(param_1);;

  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if (param_1[0xd1e] != 0) {
	bVar2 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar2 == false) {
	  param_1[0xd1e] = 0;
	}
  }
  if (((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) && (*(char *)(param_1 + 0xd1f) != '\0 '))
  {
	lVar4 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),3);
	if (lVar4 == 0) {
	  if (param_1[0xd1e] != 0) {
		bVar2 = hookret(0x140001b80,param_1[0xd1e]);
		if (bVar2 == false) {
		  param_1[0xd1e] = 0;
		}
	  }
	  plVar1 = (longlong *)param_1[0xd1e];
	  if (plVar1 != (longlong *)0x0) {
		bVar2 = hookret(0x140001b80,(longlong)plVar1);
		if (bVar2 != false) {
		  (**(code **)(*plVar1 + 0xd8))(plVar1);
		  param_1[0xd1e] = 0;
		}
	  }
	  *(undefined *)(param_1 + 0xd1f) = 0;
	  iVar3 = hookret(0x140004a40,(longlong)param_1);
	  puVar5 = hookret(0x140004a50,(longlong)param_1,local_18);
	  puVar6 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar6,puVar5,0xb,(longlong)iVar3);
	  hook(0x1400239c0,local_18,0xffffffffffffffff);
	  thunk_hook(0x14000b010,(longlong)(param_1 + 0xd22),(longlong)local_18);
	}
  }
  return;



POSTCHARACTER();
}
void UndefinedFunction_1400b8a00(longlong *param_1)

{
PRECHARACTER(param_1);;

  char cVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined6 extraout_var;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uStack72;
  undefined4 uStack68;
  undefined4 uStack64;
  undefined8 auStack56 [2];
  undefined8 auStack40 [4];

  hook(0x14004bd30,param_1);
  hook(0x14007a390,param_1 + 0xd1e);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400b91e0,param_1);
  hook(0x1400b5a90,param_1);
  hook(0x1400b9630,(longlong)param_1);
  lVar4 = hookret(0x14004cab0,(longlong)param_1,0);
  uVar2 = hookret(0x140032f40,lVar4);
  uVar12 = 0x3f800000;
  if ((((int)CONCAT62(extraout_var,uVar2) == 0x1a4) &&
	  (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), 60.0 <= fVar11)) &&
	 (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar11 < 62.0)) {
	puVar5 = hookret(0x140004a50,(longlong)param_1,auStack56);
	puVar6 = hookret(0x140003aa0);
	hook(0x1402aad60,(longlong)puVar6,auStack40,puVar5,0x12,0,param_1,0,uVar12,(longlong)param_1);
  }
  uVar2 = hookret(0x140032f40,lVar4);
  if ((((int)CONCAT62(extraout_var_00,uVar2) == 0x1a5) &&
	  (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), 64.0 <= fVar11)) &&
	 (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar11 < 66.0)) {
	puVar5 = hookret(0x140004a50,(longlong)param_1,auStack40);
	puVar6 = hookret(0x140003aa0);
	hook(0x1402aad60,(longlong)puVar6,auStack56,puVar5,0x12,0,param_1,0,uVar12,(longlong)param_1);
  }
  uVar2 = hookret(0x140032f40,lVar4);
  if ((((int)CONCAT62(extraout_var_01,uVar2) == 0x1a6) &&
	  (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), 64.0 <= fVar11)) &&
	 (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar11 < 66.0)) {
	puVar5 = hookret(0x140004a50,(longlong)param_1,auStack40);
	puVar6 = hookret(0x140003aa0);
	hook(0x1402aad60,(longlong)puVar6,auStack56,puVar5,0x12,0,param_1,0,uVar12,(longlong)param_1);
  }
  uVar2 = hookret(0x140032f40,lVar4);
  if ((((int)CONCAT62(extraout_var_02,uVar2) == 0x1a7) &&
	  (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), 64.0 <= fVar11)) &&
	 (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar11 < 66.0)) {
	puVar5 = hookret(0x140004a50,(longlong)param_1,auStack40);
	puVar6 = hookret(0x140003aa0);
	hook(0x1402aad60,(longlong)puVar6,auStack56,puVar5,0x12,0,param_1,0,uVar12,(longlong)param_1);
  }
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((((iVar3 == 0xc0) || (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 == 0xca)) ||
	  ((iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 == 0xac &&
	   ((*(byte *)(param_1 + 0x29f) & 4) == 0)))) &&
	 (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar11 <= 25.0)) {
	hookret(0x1400b9580,(longlong)param_1);
  }
  hook(0x14000bf40,&uStack72,&DAT_140d76030);
  uVar12 = 1;
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar3 == 0x28) {
	uStack68 = 0x42c80000;
  }
  else {
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar3 != 0x29) {
	  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar3 != 0x2a) {
		return;
	  }
	  uStack68 = 0x43070000;
	  goto LAB_1400b8d70;
	}
	uStack68 = 0x428c0000;
  }
  uVar12 = 3;
  uStack64 = 0xc1200000;
LAB_1400b8d70:
  lVar4 = hookret(0x140001a90);
  cVar1 = hookret(0x140038a10,lVar4 + 0x38);
  if (cVar1 != '\0') {
	uVar7 = hookret(0x140004740);
	plVar8 = hookret(0x140131530,uVar7,100,0x1b,param_1,uVar12,0xffffffff,&DAT_140d76030,param_1,
						   0xffffffff,&uStack72,4,4,3,(longlong *)0x0);
	if (plVar8 != (longlong *)0x0) {
	  (**(code **)(*plVar8 + 0xa8))(plVar8,param_1);
	  uVar7 = hookret(0x1400604e0,(longlong)plVar8,param_1);
	  puVar9 = hookret(0x140001030,uVar7,0x3f666666,0x3f666666,0x3f666666,(undefined4 *)auStack40);
	  hook(0x140016830,(longlong)plVar8,puVar9);
	  hook(0x140060360,(longlong)plVar8,0xc0);
	  hook(0x140077ac0,(longlong)plVar8,0x40);
	  plVar10 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar10,0xd,plVar8,0);
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400b5010(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  hookret(0x14004d3e0,*(longlong *)param_1[0x7e8],1,2);
	  uVar1 = 1;
	}
	else {
	  hookret(0x14004d3e0,*(longlong *)param_1[0x7e8],1,1);
	  uVar1 = 2;
	}
	hookret(0x14004d3e0,*(longlong *)param_1[0x7e8],0,uVar1);
	return;
  }
  return;



POSTCHARACTER();
}
void FUN_1400ae4a0(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float fVar18;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 local_78 [2];
  undefined8 local_68 [8];

  uVar6 = hookret(0x140056290,(longlong)param_1);
  uVar1 = *(uint *)((longlong)param_1 + 0x14f4);
  lVar7 = hookret(0x1400129d0,(longlong)param_1);
  lVar8 = hookret(0x140011720,lVar7);
  if (lVar8 != 0) {
	if (((*(uint *)(param_1 + 0x2a2) & 0x400000) == 0) &&
	   (uVar9 = hookret(0x140056290,(longlong)param_1), (char)uVar9 != '\0')) {
	  uVar17 = 0;
	  do {
		uVar4 = (**(code **)(*param_1 + 0x468))(param_1);
		uVar4 = hookret(0x14004b070,lVar8,uVar4);
		hook(0x14004d3e0,(longlong)param_1,(byte)uVar4,uVar17);
		uVar17 = uVar17 + 1;
	  } while ((int)uVar17 < 0x32);
	  iVar5 = hookret(0x1400ae380,(longlong)param_1);
	  if ((iVar5 == 0x46) || (uVar17 = hookret(0x14004b070,lVar8,0x46), (char)uVar17 != '\0')) {
		hook(0x14004d3e0,(longlong)param_1,1,0x46);
	  }
	}
	else {
	  hook(0x14004d420,(longlong)param_1,'\0');
	}
	if (*(char *)(param_1 + 0xdd2) != '\0') {
	  *(undefined *)(param_1 + 0xdd2) = 1;
	  uVar10 = hookret(0x140056380,lVar8,'\0');
	  if ((char)uVar10 != '\0') {
		*(undefined *)(param_1 + 0xdd2) = 0;
	  }
	  lVar11 = hookret(0x1400240f0,lVar8 + 0x1560,0xd);
	  if (lVar11 == 0) {
		*(undefined *)(param_1 + 0xdd2) = 0;
	  }
	  if ((*(byte *)(lVar8 + 0x1514) & 0x10) != 0) {
		*(undefined *)(param_1 + 0xdd2) = 1;
	  }
	  if ((*(uint *)(lVar8 + 0x1510) & 0x4000) != 0) {
		*(undefined *)(param_1 + 0xdd2) = 1;
	  }
	}
	if ((((*(uint *)(lVar8 + 0x14f4) & 0x200000) != 0) || ((*(byte *)(lVar8 + 0x1528) & 8) != 0))  ||
	   ((iVar5 = (**(code **)(*param_1 + 0x180))(param_1), 299 < iVar5 &&
		(iVar5 = (**(code **)(*param_1 + 0x180))(param_1), iVar5 < 0x154)))) {
	  lVar11 = hookret(0x14001a6f0,lVar8);
	  lVar11 = hookret(0x140011720,lVar11);
	  if (lVar11 != 0) {
		lVar11 = hookret(0x140041f50,lVar11,2);
		hook(0x140529730,(longlong)param_1,lVar11,2);
	  }
	  uVar17 = 0;
	  do {
		lVar11 = hookret(0x14004cab0,lVar8,uVar17);
		if (lVar11 != 0) {
		  lVar2 = *param_1;
		  hook(0x1407a3ec0,lVar11);
		  hook(0x1400046b0,lVar11);
		  hook(0x1407a3ec0,lVar11);
		  hook(0x14000cee0,(longlong)param_1);
		  hook(0x140032f40,lVar11);
		  (**(code **)(lVar2 + 0xd8))(param_1);
		}
		uVar17 = uVar17 + 1;
	  } while (uVar17 < 2);
	}
  }
  uVar9 = hookret(0x140056290,(longlong)param_1);
  if (((char)uVar9 != '\0') && (*(char *)(param_1 + 0xdd2) == '\0')) {
	(**(code **)(*param_1 + 0x280))(param_1);
	*(uint *)(param_1 + 0x2a1) = *(uint *)(param_1 + 0x2a1) & 0xfffbffff;
  }
  uVar9 = hookret(0x140056290,(longlong)param_1);
  if ((char)uVar9 != '\0') {
	plVar12 = param_1 + 0xd1e;
	hook(0x140033110,(longlong)plVar12);
	lVar11 = hookret(0x140011720,(longlong)plVar12);
	if ((lVar11 != 0) && (lVar11 = hookret(0x140011720,(longlong)plVar12), lVar11 != 0)) {
	  hookret(0x140032f50,lVar11);
	  hook(0x1400aee10,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),extraout_XMM0_Da,(longlong)param _1);
	  hook(0x1400309a0,lVar11);
	  hook(0x1400aee30,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),extraout_XMM0_Da_00,
					(longlong)param_1);
	  hook(0x140032f70,lVar11);
	  hook(0x1400aee40,CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),extraout_XMM0_Da_01,
					(longlong)param_1);
	  hook(0x140032f60,lVar11);
	  hook(0x1400aee20,CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),extraout_XMM0_Da_02,
					(longlong)param_1);
	}
  }
  hook(0x14004bd30,param_1);
  if (((*(uint *)(param_1 + 0x2a2) & 0x400000) != 0) ||
	 (uVar9 = hookret(0x140056290,(longlong)param_1), (char)uVar9 == '\0')) {
	hook(0x14004d420,(longlong)param_1,'\0');
  }
  uVar9 = hookret(0x140056290,(longlong)param_1);
  plVar12 = (longlong *)hookret(0x140056010,(longlong)param_1,0xf);
  if (((((char)uVar6 != '\0') && ((uVar1 >> 0xd & 1) != 0)) || (plVar12 != (longlong *)0x0)) &&
	 ((((char)uVar6 == '\x01' && ((char)uVar9 == '\0')) ||
	  ((iVar5 = (**(code **)(*param_1 + 0x180))(param_1), iVar5 == 0x111 &&
	   (fVar18 = (float)(**(code **)(*param_1 + 0x160))(param_1), 260.0 < fVar18)))))) {
	plVar13 = (longlong *)hookret(0x140011720,lVar7);
	if (plVar13 == (longlong *)0x0) {
	  plVar13 = param_1;
	}
	uVar10 = hookret(0x140004740);
	plVar14 = hookret(0x140131310,uVar10,100,0x23,param_1,4,0xffffffff,&DAT_140d2acf0,&DAT_140d76030,4 ,3,
							(longlong *)0x0);
	if (plVar14 != (longlong *)0x0) {
	  (**(code **)(*plVar14 + 0xa8))(plVar14,param_1);
	  hook(0x1400604e0,(longlong)plVar14,plVar13);
	  hook(0x140060360,(longlong)plVar14,0x2100080);
	  plVar13 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar13,0xd,plVar14,0);
	  if ((lVar8 != 0) && (bVar3 = hookret(0x140001b80,lVar8), bVar3 != false)) {
		puVar15 = hookret(0x140004a50,lVar8,local_78);
		puVar16 = hookret(0x140003aa0);
		hook(0x1402aad60,(longlong)puVar16,local_68,puVar15,0x14,param_1,param_1,0,0x3f800000,
					  (longlong)param_1);
	  }
	}
	if (plVar12 != (longlong *)0x0) {
	  param_1[0xcf8] = 0;
	  (**(code **)(*plVar12 + 0xd8))(plVar12);
	}
	if ((lVar8 != 0) && (bVar3 = hookret(0x140001b80,lVar8), bVar3 != false)) {
	  puVar15 = hookret(0x140004a50,lVar8,local_68);
	  puVar16 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar16,puVar15,0x13,param_1);
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400ac6e0(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;

  if ((param_1[0xd1e] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd1e]), bVar2 == false)) {
	param_1[0xd1e] = 0;
  }
  uVar5 = *(uint *)(param_1 + 0x29f);
  hook(0x14004bd30,param_1);
  uVar1 = *(uint *)(param_1 + 0x29f);
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar4 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400ac490,(longlong)param_1);
  if ((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) {
	hookret(0x1400ac630,(longlong)param_1,0x10);
	hookret(0x1400ac630,(longlong)param_1,0x13);
  }
  else {
	if (((byte)(uVar1 >> 0x16) & 1) != ((byte)(uVar5 >> 0x16) & 1)) {
	  hookret(0x1400ac630,(longlong)param_1,0x10);
	  hookret(0x1400ac630,(longlong)param_1,0x13);
	}
	hook(0x1400ac4f0,param_1,0x10);
	hook(0x1400ac4f0,param_1,0x13);
  }
  uVar5 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar5 != '\0') {
	hookret(0x1400acb90,param_1);
  }
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar4 == 0x28) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0x29)) ||
	 (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0x2a)) {
	lVar6 = hookret(0x140001a90);
	cVar3 = hookret(0x140038a10,lVar6 + 0x38);
	if (cVar3 != '\0') {
	  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0xfffffffc;
	  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 0x800;
	}
  }
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((iVar4 != 0x109) && (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 != 0x10b)) {
	return;
  }
  if ((*(uint *)((longlong)param_1 + 0x14f4) >> 0x14 & 1) != 0) {
	*(uint *)((longlong)param_1 + 0x14f4) = *(uint *)((longlong)param_1 + 0x14f4) & 0xffefffff;
  }
  return;


POSTCHARACTER();
}
void UndefinedFunction_1400aaeb0(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  byte bVar20;
  longlong alStack136 [2];
  undefined4 uStack120;
  undefined4 uStack116;
  undefined4 uStack112;
  undefined8 auStack104 [2];
  undefined8 auStack88 [3];

  plVar16 = param_1 + 0xd22;
  lVar19 = 2;
  do {
	if ((*plVar16 != 0) && (bVar7 = hookret(0x140001b80,*plVar16), bVar7 == false)) {
	  *plVar16 = 0;
	}
	plVar16 = plVar16 + 1;
	lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  if ((param_1[0xd24] != 0) && (bVar7 = hookret(0x140001b80,param_1[0xd24]), bVar7 == false)) {
	param_1[0xd24] = 0;
  }
  uVar18 = *(uint *)(param_1 + 0x2a2) >> 0x14;
  uVar12 = hookret(0x1400aad40,param_1);
  if (((char)uVar12 == '\0') || (bVar7 = true, (uVar18 & 1) != 0)) {
	bVar7 = false;
  }
  uVar12 = hookret(0x1400aac60,param_1);
  if (((char)uVar12 == '\0') || (bVar5 = true, (uVar18 & 1) != 0)) {
	bVar5 = false;
  }
  uVar13 = hookret(0x1400aace0,param_1);
  if (((char)uVar13 != '\0') || (bVar6 = false, (uVar18 & 1) != 0)) {
	bVar6 = true;
  }
  hook(0x14004bd30,param_1);
  iVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar9 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  if (((*(uint *)(param_1 + 0x29e) & 0x2000) != 0) && ((*(uint *)(param_1 + 0x2a1) & 0x100000) !=  0)
	 ) {
	hookret(0x140024b30,(longlong)(param_1 + 0x2ac),6);
  }
  hook(0x1400725d0,(longlong)param_1);
  uVar10 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar10 != '\0') {
	hookret(0x1400ac0c0,(longlong)param_1);
  }
  hook(0x1400ab5b0,param_1);
  alStack136[0] = hookret(0x140056010,(longlong)param_1,0xf);
  lVar19 = hookret(0x140056010,(longlong)param_1,0x10);
  uVar10 = *(uint *)(param_1 + 0x2a2) >> 0x14;
  uVar12 = hookret(0x1400aad40,param_1);
  if (((char)uVar12 == '\0') || ((uVar10 & 1) != 0)) {
	bVar1 = false;
  }
  else {
	bVar1 = true;
  }
  uVar12 = hookret(0x1400aac60,param_1);
  if (((char)uVar12 == '\0') || ((uVar10 & 1) != 0)) {
	bVar2 = false;
  }
  else {
	bVar2 = true;
  }
  uVar13 = hookret(0x1400aace0,param_1);
  if (((char)uVar13 == '\0') && ((uVar10 & 1) == 0)) {
	bVar3 = false;
  }
  else {
	bVar3 = true;
  }
  bVar4 = false;
  bVar20 = ~(byte)(*(uint *)(param_1 + 0x2a2) >> 0xb) & 1;
  if ((((bVar1) && (alStack136[0] == 0)) && (lVar19 == 0)) || ((!bVar7 && (bVar1)))) {
	hookret(0x1400aaad0,(longlong)param_1,0xf);
	hookret(0x1400aaad0,(longlong)param_1,0x10);
	hook(0x1400a9460,param_1,0xf,0);
	if (bVar20 != 0) {
	  iVar9 = 0;
	  uVar18 = 0x10;
	  goto LAB_1400ab107;
	}
LAB_1400ab10f:
	bVar7 = true;
  }
  else {
	if ((((bVar2) && (alStack136[0] == 0)) && (lVar19 == 0)) || ((!bVar5 && (bVar2)))) {
	  hookret(0x1400aaad0,(longlong)param_1,0xf);
	  hookret(0x1400aaad0,(longlong)param_1,0x10);
	  uVar18 = 0xf;
	  iVar9 = 1;
LAB_1400ab107:
	  hook(0x1400a9460,param_1,uVar18,iVar9);
	  goto LAB_1400ab10f;
	}
	if (((((bVar3) && (alStack136[0] == 0)) && (lVar19 == 0)) || ((!bVar6 && (bVar3)))) ||
	   (((uVar18 & 1) == 0 && ((uVar10 & 1) != 0)))) {
	  hookret(0x1400aaad0,(longlong)param_1,0xf);
	  hookret(0x1400aaad0,(longlong)param_1,0x10);
	  uVar18 = 0xf;
	  iVar9 = 2;
	  goto LAB_1400ab107;
	}
	if ((((!bVar1) && (!bVar3)) && (!bVar2)) ||
	   (bVar7 = false, (*(uint *)(param_1 + 0x2a2) >> 10 & 1) != 0)) {
	  hookret(0x1400aaad0,(longlong)param_1,0xf);
	  hookret(0x1400aaad0,(longlong)param_1,0x10);
	  bVar7 = true;
	  goto LAB_1400ab115;
	}
  }
  bVar4 = bVar7;
  bVar7 = false;
LAB_1400ab115:
  if (bVar20 == 0) {
	hookret(0x1400aaad0,(longlong)param_1,0x10);
  }
  else if (((bVar1) && (!bVar2)) && (!bVar3)) {
	hook(0x1400a9460,param_1,0x10,0);
  }
  uVar11 = (**(code **)(*param_1 + 0x180))();
  switch(uVar11) {
  case 0x83:
  case 0x84:
  case 0x89:
  case 0x155:
  case 0x157:
  case 0x158:
  case 0x16d:
  case 0x16e:
  case 0x16f:
	break;
  default:
	lVar19 = hookret(0x140001a90);
	iVar9 = hookret(0x140221120,lVar19);
	if (((bVar4) && (uVar13 = hookret(0x140056380,(longlong)param_1,'\0'), (char)uVar13 == '\0')) &&
	   ((iVar9 != 1 && (iVar9 != 0xc)))) {
	  if (((*(byte *)(param_1 + 0x29e) & 1) == 0) || (iVar9 == 2)) {
		iVar9 = hookret(0x140004a40,(longlong)param_1);
		puVar14 = hookret(0x140004a50,(longlong)param_1,alStack136);
		puVar15 = hookret(0x140003aa0);
		hook(0x1402aad60,(longlong)puVar15,auStack104,puVar14,0,(longlong)iVar9,param_1,0,0x3f800000 ,
					  (longlong)param_1);
	  }
	}
	else if (bVar7) {
	  iVar9 = hookret(0x140004a40,(longlong)param_1);
	  puVar14 = hookret(0x140004a50,(longlong)param_1,auStack88);
	  puVar15 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar15,puVar14,0,(longlong)iVar9);
	}
  }
  lVar19 = hookret(0x1400aaba0,(longlong)param_1);
  if (lVar19 != 0) {
	lVar19 = hookret(0x1400aaba0,(longlong)param_1);
	hook(0x140037700,lVar19,(*(uint *)(param_1 + 0x2a2) & 0x40000000) != 0);
  }
  hook(0x14000bf40,&uStack120,&DAT_140d76030);
  iVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((0x27 < iVar9) && (iVar9 = (**(code **)(*param_1 + 0x180))(param_1), iVar9 < 0x2b)) {
	uStack116 = 0x42f00000;
	uStack112 = 0x42c80000;
	lVar19 = hookret(0x140001a90);
	cVar8 = hookret(0x140038a10,lVar19 + 0x38);
	if (cVar8 != '\0') {
	  uVar13 = hookret(0x140004740);
	  plVar16 = hookret(0x140131410,uVar13,100,0x19,param_1,0xffffffff,0xffffffff,&DAT_140d760b0,param _1,
							  0xffffffff,&uStack120,4,3,(longlong *)0x0);
	  if (plVar16 != (longlong *)0x0) {
		(**(code **)(*plVar16 + 0xa8))(plVar16,param_1);
		hook(0x1400604e0,(longlong)plVar16,param_1);
		hook(0x140060360,(longlong)plVar16,0xc0);
		hook(0x140077ac0,(longlong)plVar16,0x40);
		plVar17 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar17,0xd,plVar16,0);
	  }
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400a8830(longlong *param_1)

{
PRECHARACTER(param_1);;

  undefined4 extraout_XMM0_Da;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400a8d50,(longlong)param_1);
	hook(0x1400a8e10,param_1);
	hook(0x1400a8ce0,(longlong)param_1);
	hook(0x1400e0960,(longlong)param_1);
	hook(0x1400a8ec0,(longlong)param_1);
	hook(0x14054a250,(longlong)(param_1 + 0x2a6));
	*(undefined4 *)((longlong)param_1 + 0x68f4) = extraout_XMM0_Da;
  }
  return;


POSTCHARACTER();
}
void FUN_1400a66e0(longlong *param_1)

{
PRECHARACTER(param_1);;

  int iVar1;

  hook(0x14004bd30,param_1);
  hook(0x1400a4700,(longlong)param_1);
  if ((*(uint *)(param_1 + 0x2a2) & 0x800) != 0) {
	if (((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) && ((*(byte *)(param_1 + 0x29f) & 4) != 0) ) {
	  *(undefined4 *)((longlong)param_1 + 0x40ec) = 0xbf7ae148;
	  (**(code **)(*param_1 + 400))(param_1);
	  *(undefined4 *)((longlong)param_1 + 0x14f4) = 0x400020;
	}
	else {
	  (**(code **)(*param_1 + 400))(param_1);
	}
	*(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) | 2;
  }
  iVar1 = hookret(0x1400383e0,(longlong)param_1);
  if (iVar1 == 7) {
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) != 0) {
	  hookret(0x14004d3e0,(longlong)param_1,0,1);
	  hookret(0x14004d3e0,(longlong)param_1,1,2);
	  return;
	}
	hookret(0x14004d3e0,(longlong)param_1,0,2);
	hookret(0x14004d3e0,(longlong)param_1,1,1);
	return;
  }
  return;

POSTCHARACTER();
}
void UndefinedFunction_1400a1410(longlong *param_1)

{
PRECHARACTER(param_1);;

  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar12;
  undefined8 auStack56 [2];
  undefined8 auStack40 [4];

  lVar4 = hookret(0x1400a1250,(longlong)param_1);
  if (lVar4 != 0) {
	lVar4 = hookret(0x1400a1250,(longlong)param_1);
	bVar2 = hookret(0x140001b80,lVar4);
	if (bVar2 == false) {
	  hookret(0x1400a1b20,(longlong)param_1,0);
	}
  }
  hook(0x14004bd30,param_1);
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((iVar3 != 0x1c2) && ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0)) {
	if ((*(uint *)(param_1 + 0x2a2) & 0x80000000) != 0) {
	  pfVar5 = (float *)hookret(0x1400a1210,(longlong)param_1);
	  pfVar6 = (float *)hookret(0x140001b50,(longlong)param_1);
	  hook(0x14000bfd0,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),pfVar6,(undefined4 *)auStack56,
					pfVar5);
	  hook(0x1400da960,(longlong)param_1);
	  uVar1 = hookret(0x14001bad0,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),extraout_XMM0_Da_00 ,
							(float *)auStack56);
	  puVar7 = hookret(0x140001210,uVar1,pfVar5,(undefined4 *)auStack40,(float *)auStack56);
	  *(undefined4 *)((longlong)param_1 + 0x54) = puVar7[1];
	  if (((*(uint *)(param_1 + 0x29f) & 0x2000) != 0) &&
		 (iVar3 = hookret(0x140086ec0,(longlong)param_1), -1 < iVar3)) {
		*(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) | 2;
		lVar4 = *param_1;
		hookret(0x140086ec0,(longlong)param_1);
		(**(code **)(lVar4 + 400))(param_1);
		hook(0x1400a1980,(longlong)param_1,0xffffffff);
	  }
	}
	lVar4 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0xe);
	if (lVar4 == 0) {
	  plVar8 = (longlong *)hookret(0x140056010,(longlong)param_1,0xe);
	  if (plVar8 != (longlong *)0x0) {
		param_1[0xcf7] = 0;
		(**(code **)(*plVar8 + 0xd8))(plVar8);
		(**(code **)(*param_1 + 0x438))(param_1);
		uVar9 = hookret(0x140056290,(longlong)param_1);
		if ((char)uVar9 != '\0') {
		  iVar3 = hookret(0x140004a40,(longlong)param_1);
		  puVar10 = hookret(0x140004a50,(longlong)param_1,auStack40);
		  puVar11 = hookret(0x140003aa0);
		  hook(0x1402aa5e0,(longlong)puVar11,puVar10,0x25,(longlong)iVar3);
		  hook(0x1400239c0,auStack56,0xffffffffffffffff);
		  thunk_hook(0x14000b010,(longlong)(param_1 + 0xd24),(longlong)auStack56);
		  hook(0x14009ffc0,param_1,2);
		  hook(0x14009ffc0,param_1,3);
		}
	  }
	}
	else {
	  bVar2 = hookret(0x140061580,(longlong)(param_1 + 0xd24),-1);
	  if (bVar2 != false) {
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		puVar10 = hookret(0x140004a50,(longlong)param_1,auStack40);
		puVar11 = hookret(0x140003aa0);
		puVar10 = hookret(0x1402aad60,(longlong)puVar11,auStack56,puVar10,0x25,(longlong)iVar3,param_1 ,0,
								0x3f800000,(longlong)param_1);
		thunk_hook(0x14000b010,(longlong)(param_1 + 0xd24),(longlong)puVar10);
	  }
	}
	lVar4 = hookret(0x14002f960,(longlong)param_1,3);
	if (lVar4 != 0) {
	  lVar4 = hookret(0x14004cab0,(longlong)param_1,0);
	  hook(0x1407a3ec0,lVar4);
	  uVar12 = extraout_XMM0_Da_01;
	  lVar4 = hookret(0x14002f960,(longlong)param_1,3);
	  lVar4 = hookret(0x14004cab0,lVar4,0);
	  hook(0x1400424b0,CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_02),uVar12,lVar4);
	}
	if (((*(uint *)(param_1 + 0x2a2) & 0x100000) != 0) &&
	   (lVar4 = hookret(0x1400a1250,(longlong)param_1), lVar4 != 0)) {
	  puVar7 = (undefined4 *)hookret(0x140001b50,(longlong)param_1);
	  lVar4 = hookret(0x1400a1250,(longlong)param_1);
	  hook(0x140002af0,lVar4,puVar7);
	}
	hook(0x1400a2320,(longlong)param_1);
  }
  return;


POSTCHARACTER();
}
void FUN_14009ceb0(longlong *param_1)

{
PRECHARACTER(param_1);;

  longlong *plVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_28 [2];
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd1e]), bVar2 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd20] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd20]), bVar2 == false)) {
	param_1[0xd20] = 0;
  }
  if (((param_1[0xd1e] != 0) && (*(char *)(param_1 + 0xd21) == '\0')) &&
	 (uVar4 = hookret(0x140056290,(longlong)param_1), (char)uVar4 != '\0')) {
	(**(code **)(*(longlong *)param_1[0xd1e] + 0xe0))();
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	if ((*(char *)(param_1 + 0xd1f) != '\0') &&
	   (lVar5 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0xf), lVar5 == 0)) {
	  if ((param_1[0xd1e] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd1e]), bVar2 == false)) {
		param_1[0xd1e] = 0;
	  }
	  plVar1 = (longlong *)param_1[0xd1e];
	  if ((plVar1 != (longlong *)0x0) && (bVar2 = hookret(0x140001b80,(longlong)plVar1), bVar2 != fals e))
	  {
		(**(code **)(*plVar1 + 0xd8))(plVar1);
		param_1[0xd1e] = 0;
	  }
	  *(undefined *)(param_1 + 0xd1f) = 0;
	  iVar3 = hookret(0x140004a40,(longlong)param_1);
	  puVar6 = hookret(0x140004a50,(longlong)param_1,local_28);
	  puVar7 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar7,puVar6,4,(longlong)iVar3);
	  hook(0x1400239c0,local_28,0xffffffffffffffff);
	  thunk_hook(0x14000b010,(longlong)(param_1 + 0xd22),(longlong)local_28);
	}
	lVar5 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0xf);
	if ((lVar5 != 0) && (bVar2 = hookret(0x140061580,(longlong)(param_1 + 0xd22),-1), bVar2 != false))  {
	  iVar3 = hookret(0x140004a40,(longlong)param_1);
	  puVar6 = hookret(0x140004a50,(longlong)param_1,local_28);
	  puVar7 = hookret(0x140003aa0);
	  puVar6 = hookret(0x1402aad60,(longlong)puVar7,local_18,puVar6,4,(longlong)iVar3,param_1,0,0x3f80 0000
							 ,(longlong)param_1);
	  thunk_hook(0x14000b010,(longlong)(param_1 + 0xd22),(longlong)puVar6);
	}
	hook(0x14009d720,(longlong)param_1);
	hook(0x14009d690,(longlong)param_1);
	uVar4 = hookret(0x140056290,(longlong)param_1);
	*(char *)(param_1 + 0xd21) = (char)uVar4;
  }
  return;


POSTCHARACTER();
}
void FUN_140099e30(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined6 extraout_var;
  longlong *plVar7;
  float *pfVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  float fVar15;
  float local_128 [4];
  float local_118 [4];
  float local_108 [4];
  float local_f8 [4];
  float local_e8 [4];
  undefined local_d8 [16];
  float local_c8 [12];
  undefined local_98 [64];
  undefined local_58 [80];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd20] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd20]), bVar1 == false)) {
	param_1[0xd20] = 0;
  }
  if ((param_1[0xd24] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd24]), bVar1 == false)) {
	param_1[0xd24] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x14009af20,(longlong)param_1);
  if (param_1[0xd20] == 0) {
	bVar1 = true;
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if ((iVar4 == 100) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0x65)) {
	  bVar1 = false;
	}
	uVar5 = hookret(0x140056380,(longlong)param_1,'\0');
	if (((char)uVar5 == '\0') && (bVar1)) {
	  hookret(0x14009a830,param_1);
	}
  }
  else {
	bVar1 = false;
	iVar4 = (**(code **)(*param_1 + 0x180))();
	if ((iVar4 == 100) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0x65)) {
	  bVar1 = true;
	}
	uVar5 = hookret(0x140056380,(longlong)param_1,'\0');
	if (((char)uVar5 != '\0') || (bVar1)) {
	  if ((param_1[0xd20] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd20]), bVar1 == false)) {
		param_1[0xd20] = 0;
	  }
	  plVar7 = (longlong *)param_1[0xd20];
	  if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != fals e))
	  {
		(**(code **)(*plVar7 + 0xd8))(plVar7);
		param_1[0xd20] = 0;
	  }
	}
  }
  if (param_1[0xd24] == 0) {
	lVar6 = hookret(0x14004cab0,(longlong)param_1,0);
	uVar3 = hookret(0x140032f40,lVar6);
	if ((int)CONCAT62(extraout_var,uVar3) == 0x8d) {
	  hookret(0x14009a940,param_1);
	}
  }
  if ((*(byte *)(param_1 + 0x2a2) & 1) == 0) {
	if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	  param_1[0xd1e] = 0;
	}
	plVar7 = (longlong *)param_1[0xd1e];
	if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != false) ) {
	  (**(code **)(*plVar7 + 0xd8))(plVar7);
	  param_1[0xd1e] = 0;
	}
	*(undefined2 *)(param_1 + 0xd1f) = 0;
	goto LAB_14009a40a;
  }
  fVar11 = *(float *)((longlong)param_1 + 0x54);
  fVar15 = 150.0;
  if (150.0 < fVar11) {
LAB_14009a0d2:
	if (fVar11 <= 70.0) {
LAB_14009a0db:
	  if (*(char *)((longlong)param_1 + 0x68f9) == '\0') {
		if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
		  param_1[0xd1e] = 0;
		}
		plVar7 = (longlong *)param_1[0xd1e];
		if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != fa lse)
		   ) {
		  (**(code **)(*plVar7 + 0x78))(plVar7);
		  param_1[0xd1e] = 0;
		}
		uVar5 = hookret(0x140004740);
		plVar7 = hookret(0x140131660,uVar5,100,0xb,param_1,8,0xffffffff,3,(longlong *)0x0);
		param_1[0xd1e] = (longlong)plVar7;
		if (plVar7 != (longlong *)0x0) {
		  hookret(0x1400604e0,(longlong)plVar7,param_1);
		  hook(0x140060360,param_1[0xd1e],0x22c0);
		  plVar7 = (longlong *)hookret(0x140003160);
		  hook(0x14051a6b0,plVar7,0xd,(longlong *)param_1[0xd1e],0);
		}
		*(undefined2 *)(param_1 + 0xd1f) = 0x100;
	  }
	}
  }
  else {
	if (fVar11 <= 70.0) goto LAB_14009a0db;
	if (*(char *)(param_1 + 0xd1f) != '\0') goto LAB_14009a0d2;
	if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	  param_1[0xd1e] = 0;
	}
	plVar7 = (longlong *)param_1[0xd1e];
	if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != false) ) {
	  (**(code **)(*plVar7 + 0x78))(plVar7);
	  param_1[0xd1e] = 0;
	}
	uVar5 = hookret(0x140004740);
	plVar7 = hookret(0x140131660,uVar5,100,0xb,param_1,4,0xffffffff,3,(longlong *)0x0);
	param_1[0xd1e] = (longlong)plVar7;
	if (plVar7 != (longlong *)0x0) {
	  hookret(0x1400604e0,(longlong)plVar7,param_1);
	  hook(0x140060360,param_1[0xd1e],0x22c0);
	  plVar7 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar7,0xd,(longlong *)param_1[0xd1e],0);
	}
	*(undefined2 *)(param_1 + 0xd1f) = 1;
  }
  if (((fVar15 < *(float *)((longlong)param_1 + 0x54) ||
		fVar15 == *(float *)((longlong)param_1 + 0x54)) &&
	  ((*(char *)(param_1 + 0xd1f) != '\0' || (*(char *)((longlong)param_1 + 0x68f9) != '\0'))))  ||
	 ((*(uint *)((longlong)param_1 + 0x14f4) & 0x800) != 0)) {
	if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	  param_1[0xd1e] = 0;
	}
	plVar7 = (longlong *)param_1[0xd1e];
	if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != false) ) {
	  (**(code **)(*plVar7 + 0xd8))(plVar7);
	  param_1[0xd1e] = 0;
	}
	*(undefined2 *)(param_1 + 0xd1f) = 0;
  }
  hook(0x140098150,local_108,(float *)&DAT_140d2ab80,(float *)&DAT_140d76030);
  hook(0x1400109f0,(longlong)local_c8);
  hook(0x14000baa0,(longlong)local_98);
  if ((*(uint *)((longlong)param_1 + 0x14f4) & 0x40) == 0) {
	if ((char)*(uint *)((longlong)param_1 + 0x14f4) < '\0') {
	  fVar11 = 65.0;
	}
	else {
	  fVar11 = 90.0;
	}
	uVar14 = 0;
  }
  else {
	fVar11 = 129.0;
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  uVar14 = 0x40a00000;
	}
	else {
	  uVar14 = 0xc0a00000;
	}
  }
  pfVar8 = (float *)hookret(0x140001030,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),fVar11 * 0.0174532 9,
								  (float)(uVar14 ^ 0x80000000) * 0.01745329,0,local_f8);
  hook(0x140034c60,(longlong)local_98,pfVar8);
  lVar6 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  hook(0x14000df60,(longlong)local_98,(longlong)local_58,lVar6);
  lVar6 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  hook(0x1402f44c0,local_f8,(undefined4 *)(lVar6 + 0x30));
  uVar12 = 0;
  uVar13 = 0;
  hookret(0x140001030,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),0,0,0x4b189680,local_118);
  puVar9 = (undefined4 *)hookret(0x14000d5d0,local_118,local_d8,(longlong)local_58);
  hook(0x14000bf40,local_118,puVar9);
  hook(0x14004dbc0,CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar13,uVar12),0x3f80 0000
				,local_128,local_f8);
  hook(0x14000bfd0,CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),local_118,local_e8,local_f8);
  uVar10 = hookret(0x1404b6eb0,local_128,local_108,local_e8,(float *)0x0,local_c8,(float *)0x0);
  if ((((char)uVar10 != '\0') && (lVar6 = param_1[0xd1e], lVar6 != 0)) &&
	 (bVar1 = hookret(0x140001b80,lVar6), bVar1 != false)) {
	hookret(0x140002af0,lVar6,local_c8);
  }
LAB_14009a40a:
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar4 != 0x28) && (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 != 0x29)) &&
	 (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 != 0x2a)) {
	return;
  }
  lVar6 = hookret(0x140001a90);
  cVar2 = hookret(0x140038a10,lVar6 + 0x38);
  if (cVar2 != '\0') {
	hook(0x14000bf40,local_108,&DAT_140d76030);
	hook(0x14000bf40,local_128,&DAT_140d76030);
	lVar6 = hookret(0x140004740);
	hook(0x140130fa0,lVar6,0x3ec,param_1,param_1,local_108,local_128,0);
  }
  return;


POSTCHARACTER();
}
void FUN_1400edf80(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  undefined4 extraout_XMM0_Da;

  hook(0x14004bd30,param_1);
  if (param_1[0xd20] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd20]);
	if (bVar1 == false) {
	  param_1[0xd20] = 0;
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400eebf0,param_1);
	hook(0x1400eea90,(longlong)param_1);
	hook(0x1400eeb70,(longlong)param_1);
	hook(0x14054a250,(longlong)(param_1 + 0x2a6));
	*(undefined4 *)((longlong)param_1 + 0x690c) = extraout_XMM0_Da;
  }
  return;



POSTCHARACTER();
}
void FUN_140097740(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar8;

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd1f] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1f]), bVar1 == false)) {
	param_1[0xd1f] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x140093490,(longlong)param_1);
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if (((iVar4 < 0xbe) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 0xc0 < iVar4)) &&
	   ((iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0xc4 ||
		(iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 200 < iVar4)))) {
	  *(undefined4 *)(param_1 + 0xd20) = 0;
	}
	if ((*(uint *)(param_1 + 0x29f) & 0x2000000) != 0) {
	  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (((iVar4 < 0xbe) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 0xc0 < iVar4)) &&
		 ((iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0xc4 ||
		  (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 0xc6 < iVar4)))) {
		*(undefined4 *)((longlong)param_1 + 0x6904) = 0;
	  }
	  else {
		*(int *)((longlong)param_1 + 0x6904) = *(int *)((longlong)param_1 + 0x6904) + 1;
	  }
	}
	if ((*(int *)(param_1 + 0xd20) != 0) &&
	   ((((*(uint *)((longlong)param_1 + 0x14f4) >> 0x11 & 1) != 0 ||
		 ((*(byte *)(param_1 + 0x29f) & 0x80) != 0)) ||
		((*(uint *)((longlong)param_1 + 0x14f4) >> 0xc & 1) == 0)))) {
	  param_1[0xd20] = 0;
	  *(undefined4 *)(param_1 + 0xd21) = 0;
	}
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if ((((((iVar4 < 0xbe) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 0xc0 < iVar4)) & &
		  ((iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0xc4 ||
		   (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 200 < iVar4)))) &&
		 (cVar2 = (**(code **)(*param_1 + 0x350))(param_1), cVar2 == '\0')) &&
		((iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0xac ||
		 (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 0xae < iVar4)))) &&
	   (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 != 0xb0)) {
	  if (param_1[0xd1f] != 0) {
		bVar1 = hookret(0x140001b80,param_1[0xd1f]);
		if (bVar1 == false) {
		  param_1[0xd1f] = 0;
		}
		plVar7 = (longlong *)param_1[0xd1f];
		if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != fa lse)
		   ) {
		  (**(code **)(*plVar7 + 0xd8))(plVar7);
		  param_1[0xd1f] = 0;
		}
	  }
	  if (0.0 < *(float *)(param_1 + 0xd21)) {
		if ((param_1[0xd1f] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1f]), bVar1 == false)) {
		  param_1[0xd1f] = 0;
		}
		plVar7 = (longlong *)param_1[0xd1f];
		if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != fa lse)
		   ) {
		  (**(code **)(*plVar7 + 0x78))(plVar7);
		  param_1[0xd1f] = 0;
		}
		if ((param_1[0xd1f] == 0) &&
		   (lVar5 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x21), lVar5 == 0)) {
		  uVar6 = hookret(0x140004740);
		  plVar7 = hookret(0x140131660,uVar6,100,0x11,param_1,0xffffffff,0xffffffff,3,(longlong *)0x0) ;
		  param_1[0xd1f] = (longlong)plVar7;
		  if (plVar7 != (longlong *)0x0) {
			(**(code **)(*plVar7 + 0xa8))(plVar7,param_1);
			hook(0x1400604e0,param_1[0xd1f],param_1);
			hook(0x140060360,param_1[0xd1f],0x200028c0);
			plVar7 = (longlong *)hookret(0x140003160);
			hook(0x14051a6b0,plVar7,0xd,(longlong *)param_1[0xd1f],0);
		  }
		}
		*(undefined4 *)(param_1 + 0xd21) = 0;
	  }
	}
	else {
	  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	  if ((0xab < iVar4) && (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0xaf)) {
		lVar5 = hookret(0x14004cab0,(longlong)param_1,0);
		uVar3 = hookret(0x140032f40,lVar5);
		if (((int)CONCAT62(extraout_var,uVar3) != 0x133) &&
		   ((uVar3 = hookret(0x140032f40,lVar5), (int)CONCAT62(extraout_var_00,uVar3) != 0x147 &&
			(uVar3 = hookret(0x140032f40,lVar5), (int)CONCAT62(extraout_var_01,uVar3) != 0x151)))) {
		  return;
		}
	  }
	  fVar8 = *(float *)(param_1 + 0x266) * *(float *)((longlong)param_1 + 0x1304);
	  lVar5 = hookret(0x140001a90);
	  hook(0x140012930,lVar5 + 0x38,0);
	  fVar8 = fVar8 * extraout_XMM0_Da;
	  hook(0x14000cee0,(longlong)param_1);
	  *(float *)(param_1 + 0xd21) = extraout_XMM0_Da_00 * fVar8 + *(float *)(param_1 + 0xd21);
	  if ((param_1[0xd1f] == 0) &&
		 (lVar5 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x21), lVar5 == 0)) {
		uVar6 = hookret(0x140004740);
		plVar7 = hookret(0x140131660,uVar6,100,0xb,param_1,0xffffffff,0xffffffff,3,(longlong *)0x0);
		param_1[0xd1f] = (longlong)plVar7;
		if (plVar7 != (longlong *)0x0) {
		  (**(code **)(*plVar7 + 0xa8))(plVar7,param_1);
		  hook(0x1400604e0,param_1[0xd1f],param_1);
		  hook(0x140060360,param_1[0xd1f],0x200028c0);
		  hook(0x140077ac0,param_1[0xd1f],0x10);
		  plVar7 = (longlong *)hookret(0x140003160);
		  hook(0x14051a6b0,plVar7,0xd,(longlong *)param_1[0xd1f],0);
		}
	  }
	}
	hook(0x140097f60,param_1);
  }
  return;


POSTCHARACTER();
}
void FUN_140095b40(longlong *param_1)

{
PRECHARACTER(param_1);;

  int iVar1;
  float fVar2;

  hook(0x14004bd30,param_1);
  iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if (0x10a < iVar1) {
	iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar1 < 0x10e) {
	  fVar2 = (float)(**(code **)(*param_1 + 0x160))(param_1);
	  if ((20.0 <= fVar2) && (-1 < (int)*(uint *)(param_1 + 0x2a2))) {
		*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 0x80000000;
	  }
	}
  }
  return;


POSTCHARACTER();
}
void UndefinedFunction_140092b60(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float extraout_XMM0_Da;
  float fVar7;
  undefined8 auStack40 [2];
  undefined8 auStack24 [2];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1f] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1f]), bVar1 == false)) {
	param_1[0xd1f] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x140093510,param_1);
	hook(0x140093490,(longlong)param_1);
	hook(0x140093860,param_1);
	hook(0x1400937d0,(longlong)param_1);
	hook(0x140093820,(longlong)param_1);
	iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar2 - 0xf4U < 2) {
	  hook(0x14000cee0,(longlong)param_1);
	  *(float *)(param_1 + 0xd25) = extraout_XMM0_Da + *(float *)(param_1 + 0xd25);
	  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar2 == 0xf4) {
		fVar7 = 31.0;
	  }
	  else {
		fVar7 = 16.0;
	  }
	  if (fVar7 < *(float *)(param_1 + 0xd25)) {
		lVar4 = hookret(0x140001a90);
		iVar2 = hookret(0x140221120,lVar4);
		if ((iVar2 != 1) && (iVar2 != 0xc)) {
		  iVar2 = hookret(0x140004a40,(longlong)param_1);
		  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
		  puVar5 = hookret(0x140004a50,(longlong)param_1,auStack40);
		  puVar6 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar6,auStack24,puVar5,(iVar3 != 0xf4) + 2,(longlong)iVar2,
						param_1,0,0x3f800000,(longlong)param_1);
		}
		*(undefined4 *)(param_1 + 0xd25) = 0;
	  }
	}
	iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	if ((iVar2 != 0x106) && (iVar2 = (**(code **)(*param_1 + 0x180))(param_1), iVar2 != 0x107)) {
	  return;
	}
	fVar7 = (float)(**(code **)(*param_1 + 0x160))(param_1);
	if ((fVar7 < 40.0) && (iVar2 = (**(code **)(*param_1 + 0x1b0))(param_1), iVar2 != -2)) {
	  (**(code **)(*param_1 + 0x1a8))(param_1,0xfffffffe);
	  return;
	}
  }
  return;


POSTCHARACTER();
}
void FUN_140090810(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float extraout_XMM0_Da_00;
  float fVar7;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	fVar7 = 0.0;
	if ((*(byte *)(param_1 + 0x2a2) & 1) == 0) {
	  if (*(float *)(param_1 + 0xd23) != 0.0) {
		*(undefined4 *)(param_1 + 0xd23) = 0;
	  }
	}
	else {
	  lVar5 = hookret(0x1400561f0,(longlong)param_1);
	  uVar3 = hookret(0x1406d1c80,lVar5);
	  if ((uVar3 >> 0x14 & 1) == 0) {
		hookret(0x14000cee0,(longlong)param_1);
		fVar6 = extraout_XMM0_Da_00;
	  }
	  else {
		hookret(0x14000cee0,(longlong)param_1);
		fVar6 = extraout_XMM0_Da * 2.0;
	  }
	  *(float *)(param_1 + 0xd23) = fVar6 + *(float *)(param_1 + 0xd23);
	}
	hook(0x140091050,(longlong)param_1);
	hook(0x1400910b0,(longlong)param_1);
	if (*(longlong *)(param_1[0x7e8] + 0x10) != 0) {
	  hookret(0x14004d3e0,*(longlong *)(param_1[0x7e8] + 0x10),1,1);
	  hookret(0x14004d3e0,*(longlong *)(param_1[0x7e8] + 0x10),1,2);
	}
	bVar1 = false;
	bVar2 = false;
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if (((iVar4 == 0xd0) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0xd1)) ||
	   (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0xd2)) {
	  bVar1 = true;
	}
	iVar4 = (**(code **)(*param_1 + 0x188))(param_1);
	if (((((iVar4 == 0xc1) || (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xc3))  ||
		 ((iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xc4 ||
		  ((iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xc5 ||
		   (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xc6)))))) ||
		(iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xca)) ||
	   ((((iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xcb ||
		  (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xcc)) ||
		 (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xd0)) ||
		((iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xd1 ||
		 (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xd2)))))) {
	  bVar2 = true;
	}
	if ((bVar1) && (bVar2)) {
	  fVar6 = (float)(**(code **)(*param_1 + 0x170))(param_1);
	  if (fVar6 < 40.0) {
		fVar6 = (float)(**(code **)(*param_1 + 0x170))(param_1);
		if (fVar7 <= fVar6) {
		  param_1[0x81c] = 0;
		  param_1[0x81d] = 0;
		}
	  }
	  else {
		*(undefined4 *)((longlong)param_1 + 0x40ec) = 0xbf333333;
	  }
	}
  }
  return;


POSTCHARACTER();
}
void FUN_14008e370(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  float fVar9;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	if ((*(byte *)(param_1 + 0x2a2) & 8) != 0) {
	  uVar2 = hookret(0x14098daf0,(longlong)(param_1 + 0x439));
	  if ((uVar2 & 0x70) != 0) {
		*(int *)((longlong)param_1 + 0x68f4) = *(int *)((longlong)param_1 + 0x68f4) + 1;
	  }
	  lVar5 = hookret(0x140021fa0,(longlong)param_1);
	  lVar6 = hookret(0x140011720,lVar5);
	  if (lVar6 != 0) {
		plVar7 = (longlong *)hookret(0x140011720,lVar5);
		lVar5 = hookret(0x140001ab0);
		lVar5 = hookret(0x1400049f0,lVar5);
		uVar8 = hookret(0x140242630,lVar5,param_1,plVar7);
		if ((char)uVar8 != '\0') {
		  *(undefined4 *)((longlong)param_1 + 0x68f4) = 0x1e;
		}
	  }
	}
	bVar1 = false;
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	iVar4 = (**(code **)(*param_1 + 0x188))(param_1);
	if (((iVar4 == 199) || (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 200)) ||
	   (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xc9)) {
	  bVar1 = true;
	}
	if (((iVar3 == 0xca) && (bVar1)) &&
	   (fVar9 = (float)(**(code **)(*param_1 + 0x170))(param_1), 0.0 <= fVar9)) {
	  *(undefined4 *)((longlong)param_1 + 0x40ec) = 0xbf333333;
	  param_1[0x81c] = 0;
	  *(undefined4 *)(param_1 + 0x81d) = 0;
	}
  }
  return;


POSTCHARACTER();
}
void FUN_14008c3c0(longlong *param_1)

{
PRECHARACTER(param_1);;

  int iVar1;
  uint uVar2;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x14008c710,(longlong)param_1);
  iVar1 = hookret(0x1400383e0,(longlong)param_1);
  if (iVar1 == 7) {
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  hookret(0x14004d3e0,(longlong)param_1,0,0xc);
	  uVar2 = 0xb;
	}
	else {
	  hookret(0x14004d3e0,(longlong)param_1,0,0xb);
	  uVar2 = 0xc;
	}
	hookret(0x14004d3e0,(longlong)param_1,1,uVar2);
	if ((*(byte *)(param_1 + 0x2a2) & 8) != 0) {
	  hookret(0x14004d3e0,(longlong)param_1,1,10);
	  return;
	}
	hookret(0x14004d3e0,(longlong)param_1,0,10);
	return;
  }
  return;


POSTCHARACTER();
}
void FUN_140089400(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_28 [4];
  undefined4 local_18 [4];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  plVar4 = param_1 + 0xd1f;
  lVar5 = 3;
  do {
	if ((*plVar4 != 0) && (bVar1 = hookret(0x140001b80,*plVar4), bVar1 == false)) {
	  *plVar4 = 0;
	}
	plVar4 = plVar4 + 1;
	lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((param_1[0xd22] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd22]), bVar1 == false)) {
	param_1[0xd22] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x140089dc0,(longlong)param_1);
	hook(0x140089e90,param_1);
	hook(0x140089d60,(longlong)param_1);
	hook(0x140089e00,(longlong)param_1);
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	if (((iVar3 != 0x28) && (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x29)) &&
	   (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x2a)) {
	  return;
	}
	lVar5 = hookret(0x140001a90);
	cVar2 = hookret(0x140038a10,lVar5 + 0x38);
	if (cVar2 != '\0') {
	  hookret(0x14000bf40,local_18,&DAT_140d76030);
	  hookret(0x14000bf40,local_28,&DAT_140d76030);
	  lVar5 = hookret(0x140004740);
	  hook(0x140130fa0,lVar5,0x3eb,param_1,param_1,local_18,local_28,0);
	}
  }
  return;


POSTCHARACTER();
}
void FUN_140081310(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 local_28 [2];
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  lVar4 = hookret(0x1400129d0,(longlong)param_1);
  uVar2 = hookret(0x140048270,lVar4);
  if ((uVar2 & 0x10) != 0) {
	*(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) & 0xfffffffe;
	return;
  }
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((iVar3 == 0xdc) && ((*(byte *)(param_1 + 0x29e) & 1) == 0)) {
	lVar5 = hookret(0x140011720,lVar4);
	if (lVar5 != 0) {
	  bVar1 = hookret(0x140001b80,lVar5);
	  if (bVar1 != false) {
		if (*(char *)((longlong)param_1 + 0x68f4) == '\0') {
		  if (50.0 < *(float *)((longlong)param_1 + 0x132c)) {
			iVar3 = hookret(0x1400812f0,lVar5);
			iVar8 = 9;
			if (iVar3 != 0) {
			  iVar8 = 0x12;
			}
			puVar6 = hookret(0x140004a50,lVar5,local_28);
			puVar7 = hookret(0x140003aa0);
			hook(0x1402aad60,(longlong)puVar7,local_18,puVar6,iVar8,0,param_1,0,0x3f800000,
						  (longlong)param_1);
			*(undefined *)((longlong)param_1 + 0x68f4) = 1;
		  }
		}
		else {
		  uVar2 = hookret(0x1403d8590,lVar4);
		  if ((uVar2 >> 0xd & 1) == 0) {
			iVar3 = hookret(0x1400812f0,lVar5);
			uVar9 = 9;
			if (iVar3 != 0) {
			  uVar9 = 0x12;
			}
			puVar6 = hookret(0x140004a50,lVar5,local_18);
			puVar7 = hookret(0x140003aa0);
			hook(0x1402aa5e0,(longlong)puVar7,puVar6,uVar9,0);
		  }
		}
	  }
	}
	return;
  }
  *(undefined *)((longlong)param_1 + 0x68f4) = 0;
  return;


POSTCHARACTER();
}
void FUN_14007d990(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;

  lVar2 = hookret(0x1400129d0,(longlong)param_1);
  uVar1 = hookret(0x140048270,lVar2);
  if ((uVar1 & 0x10) != 0) {
	*(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) & 0xfffffffe;
  }
  uVar1 = hookret(0x140048270,lVar2);
  if ((uVar1 & 0x10) == 0) {
	uVar3 = hookret(0x140056290,(longlong)param_1);
	if (((char)uVar3 != '\0') && (*(char *)(param_1 + 0xd2a) == '\0')) {
	  (**(code **)(*param_1 + 0x280))(param_1);
	}
	uVar3 = hookret(0x140056290,(longlong)param_1);
	if ((char)uVar3 == '\0') {
	  hookret(0x14004d420,(longlong)param_1,'\0');
	  hook(0x14004bd30,param_1);
	  return;
	}
	uVar1 = hookret(0x14004b070,(longlong)param_1,0);
	if ((char)uVar1 == '\0') {
	  hookret(0x14004d420,(longlong)param_1,'\x01');
	  hook(0x14004d3e0,(longlong)param_1,0,0x7e);
	  hook(0x14004d3e0,(longlong)param_1,0,0x7f);
	  lVar2 = hookret(0x140031550,(longlong)(param_1 + 0x2a6));
	  if (lVar2 != 0) {
		hookret(0x14004d0f0,param_1,*(uint *)(lVar2 + 0x24c));
	  }
	}
  }
  hook(0x14004bd30,param_1);
  return;


POSTCHARACTER();
}
void UndefinedFunction_14007ad00(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  longlong lVar10;
  longlong *plVar11;
  float extraout_XMM0_Da;
  float fVar12;
  undefined4 uStack88;
  undefined4 uStack84;
  undefined4 uStack80;
  float fStack72;
  float fStack64;
  undefined8 auStack56 [4];

  hook(0x14004bd30,param_1);
  hook(0x14007a390,param_1 + 0xd1e);
  pplVar9 = (longlong **)(param_1 + 0xd21);
  hook(0x14007a390,(longlong *)pplVar9);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x14007a600,(longlong)param_1);
	hook(0x14007a660,(longlong)param_1);
	hook(0x14007b9e0,param_1);
	hook(0x1400e0960,(longlong)param_1);
	plVar11 = param_1 + 0xd26;
	lVar10 = 3;
	do {
	  plVar4 = *pplVar9;
	  if (plVar4 == (longlong *)0x0) {
		*(undefined4 *)plVar11 = 0;
		plVar4 = *pplVar9;
		if (plVar4 != (longlong *)0x0) goto LAB_14007ada3;
	  }
	  else {
LAB_14007ada3:
		bVar1 = hookret(0x140001b80,(longlong)plVar4);
		if ((bVar1 == false) &&
		   (plVar4 = hookret(0x140013a90,plVar4,(longlong)&DAT_140d49d70), plVar4 != (longlong *)0x0))  {
		  hookret(0x140075960,(longlong)plVar4);
		  *(undefined4 *)plVar11 = 0;
		  plVar4 = *pplVar9;
		  if (plVar4 != (longlong *)0x0) {
			bVar1 = hookret(0x140001b80,(longlong)plVar4);
			if (bVar1 != false) {
			  bVar1 = hookret(0x140001b80,(longlong)plVar4);
			  if (bVar1 == false) goto LAB_14007adfa;
			  (**(code **)(*plVar4 + 0x78))(plVar4);
			}
			*pplVar9 = (longlong *)0x0;
		  }
		}
	  }
LAB_14007adfa:
	  plVar11 = (longlong *)((longlong)plVar11 + 4);
	  pplVar9 = pplVar9 + 1;
	  lVar10 = lVar10 + -1;
	} while (lVar10 != 0);
	hook(0x14007bd70,(longlong)param_1);
	if (((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) || ((*(byte *)(param_1 + 0x2a2) & 8) != 0) ) {
	  hookret(0x140079c40,(longlong)param_1,0xe);
	}
	else {
	  hook(0x14007a6e0,param_1,0xe);
	}
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar3 - 0x17fU < 9) {
	  hook(0x14000cee0,(longlong)param_1);
	  fVar12 = *(float *)(param_1 + 0xd29);
	  *(float *)(param_1 + 0xd29) = extraout_XMM0_Da + fVar12;
	  if (40.0 < extraout_XMM0_Da + fVar12) {
		lVar10 = hookret(0x140001a90);
		iVar3 = hookret(0x140221120,lVar10);
		if ((iVar3 != 1) && (iVar3 != 0xc)) {
		  iVar3 = hookret(0x140004a40,(longlong)param_1);
		  puVar5 = hookret(0x140004a50,(longlong)param_1,(undefined8 *)&fStack72);
		  puVar6 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar6,auStack56,puVar5,5,(longlong)iVar3,param_1,0,0x3f800000 ,
						(longlong)param_1);
		}
		*(undefined4 *)(param_1 + 0xd29) = 0;
	  }
	}
	hook(0x14000bf40,&uStack88,&DAT_140d76030);
	hook(0x14000bf40,&fStack72,&DAT_140d76030);
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar3 == 0x28) {
	  uStack84 = 0x43340000;
	  uStack80 = 0x40400000;
	}
	else {
	  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar3 == 0x29) {
		uStack84 = 0x42960000;
		uStack80 = 0xc0a00000;
	  }
	  else {
		iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
		if (iVar3 != 0x2a) {
		  return;
		}
		uStack84 = 0x43320000;
		uStack80 = 0x40800000;
	  }
	}
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  fVar12 = -30.0;
	}
	else {
	  fVar12 = 30.0;
	}
	lVar10 = hookret(0x140001a90);
	cVar2 = hookret(0x140038a10,lVar10 + 0x38);
	if (cVar2 != '\0') {
	  pfVar7 = (float *)hookret(0x140001030,0x3c8efa35,fStack72 * 0.01745329,fVar12 * 0.01745329,
									  fStack64 * 0.01745329,(undefined4 *)auStack56);
	  hook(0x140455840,&fStack72,pfVar7);
	  uVar8 = hookret(0x140004740);
	  plVar11 = hookret(0x140131410,uVar8,100,0x14,param_1,0xffffffff,0xffffffff,&fStack72,param_1,
							  0xffffffff,&uStack88,4,3,(longlong *)0x0);
	  if (plVar11 != (longlong *)0x0) {
		(**(code **)(*plVar11 + 0xa8))(plVar11,param_1);
		hook(0x1400604e0,(longlong)plVar11,param_1);
		hook(0x140060360,(longlong)plVar11,0xc0);
		hook(0x140077ac0,(longlong)plVar11,0x40);
		plVar4 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar4,0xd,plVar11,0);
	  }
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400ebbb0(longlong *param_1)

{
PRECHARACTER(param_1);;

  int iVar1;
  longlong lVar2;

  lVar2 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  hook(0x14000bf40,(undefined4 *)(param_1 + 0xd20),(undefined4 *)(lVar2 + 0x30));
  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400ebfa0,(longlong)param_1);
	iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
	if (0xc4 < iVar1) {
	  iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
	  if ((iVar1 < 200) && ((*(byte *)(param_1 + 0x29f) & 8) != 0)) {
		param_1[0x81c] = 0;
		param_1[0x81d] = 0;
		param_1[0x81e] = 0;
		param_1[0x81f] = 0;
	  }
	}
  }
  return;


POSTCHARACTER();
}
void FUN_140079eb0(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined6 extraout_var;

  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0x7fffffff;
  hook(0x14004bd30,param_1);
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((iVar3 == 0x1c2) || ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0)) {
	return;
  }
  hook(0x14007a320,(longlong)param_1);
  hook(0x140078220,(longlong)param_1);
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  uVar4 = hookret(0x140024160,(longlong)(param_1 + 0x2ac));
  if (((uVar4 & 0x10) == 0) ||
	 (((((iVar3 != 0x187 && iVar3 != 0x186) && iVar3 != 0x17f) && iVar3 != 0x17d) && iVar3 != 0x 17c)
	  && iVar3 != 0xf)) {
LAB_140079fc8:
	hookret(0x140079c40,(longlong)param_1,0xe);
  }
  else {
	lVar5 = hookret(0x140001b50,(longlong)param_1);
	if (*(float *)(lVar5 + 4) <= 70.0) {
	  hookret(0x140078280,param_1,0xf);
	  uVar4 = 0xe;
	  goto LAB_140079fd2;
	}
	if (150.0 < *(float *)(lVar5 + 4)) goto LAB_140079fc8;
	hookret(0x140078280,param_1,0xe);
  }
  uVar4 = 0xf;
LAB_140079fd2:
  hookret(0x140079c40,(longlong)param_1,uVar4);
  lVar5 = hookret(0x14004cab0,(longlong)param_1,0);
  uVar2 = hookret(0x140032f40,lVar5);
  if ((int)CONCAT62(extraout_var,uVar2) != 0x8d) {
	hookret(0x140079c40,(longlong)param_1,0x10);
	return;
  }
  hookret(0x140078280,param_1,0x10);
  return;


POSTCHARACTER();
}
void FUN_140077670(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 local_48 [4];

  if ((param_1[0xd20] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd20]), bVar2 == false)) {
	param_1[0xd20] = 0;
  }
  plVar10 = param_1 + 0xd21;
  lVar13 = 3;
  do {
	if ((*plVar10 != 0) && (bVar2 = hookret(0x140001b80,*plVar10), bVar2 == false)) {
	  *plVar10 = 0;
	}
	plVar10 = plVar10 + 1;
	lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  iVar4 = hookret(0x140077610,(longlong)param_1,0);
  uVar14 = 1;
  iVar5 = hookret(0x140077610,(longlong)param_1,1);
  hook(0x14004bd30,param_1);
  hook(0x140075650,(longlong)param_1);
  iVar6 = hookret(0x140077610,(longlong)param_1,0);
  iVar7 = hookret(0x140077610,(longlong)param_1,1);
  bVar2 = (*(uint *)((longlong)param_1 + 0x14f4) & 0x102000) == 0x102000;
  iVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((((iVar8 == 10) || (iVar8 = (**(code **)(*param_1 + 0x180))(param_1), iVar8 == 0x1f)) ||
	   (iVar8 = (**(code **)(*param_1 + 0x180))(param_1), iVar8 == 0x22)) ||
	  ((iVar8 = (**(code **)(*param_1 + 0x180))(param_1), 0x44 < iVar8 &&
	   (iVar8 = (**(code **)(*param_1 + 0x180))(param_1), iVar8 < 0x4b)))) ||
	 ((iVar8 = (**(code **)(*param_1 + 0x180))(param_1), 0x95 < iVar8 &&
	  (iVar8 = (**(code **)(*param_1 + 0x180))(param_1), iVar8 < 0xa9)))) {
	bVar1 = true;
  }
  else {
	bVar1 = false;
  }
  if (iVar7 + iVar6 != iVar5 + iVar4) {
	hookret(0x140077520,(longlong)param_1,0xe);
  }
  hook(0x1400756e0,param_1,0xe);
  if (((*(byte *)((longlong)param_1 + 0x14f4) & 2) == 0) || (!bVar1)) {
	hookret(0x140077520,(longlong)param_1,0x14);
	hook(0x140077ad0,(longlong)param_1,0);
  }
  if ((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) {
	hookret(0x140077520,(longlong)param_1,0x15);
  }
  else {
	hook(0x1400756e0,param_1,0x15);
  }
  if ((((bVar2) || (iVar6 == 0)) || (iVar6 != iVar4)) &&
	 (hookret(0x140077520,(longlong)param_1,0xf), bVar2)) {
LAB_14007786d:
	hookret(0x140077520,(longlong)param_1,0x10);
	if (bVar2) goto LAB_140077891;
  }
  else {
	if (iVar6 != 0) {
	  hook(0x1400756e0,param_1,0xf);
	}
	if ((iVar7 == 0) || (iVar7 != iVar5)) goto LAB_14007786d;
  }
  if (iVar7 != 0) {
	hook(0x1400756e0,param_1,0x10);
  }
LAB_140077891:
  hook(0x1400756e0,param_1,0x16);
  hook(0x14000bf40,local_48,&DAT_140d76030);
  uVar15 = 0;
  uVar12 = 0;
  uVar16 = 2;
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar4 == 0x2a) {
	uVar16 = 1;
  }
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((0x27 < iVar4) && (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0x2b)) &&
	 (uVar16 != 0)) {
	do {
	  if (uVar15 != 0) {
		uVar12 = 0x200;
	  }
	  lVar13 = hookret(0x140001a90);
	  cVar3 = hookret(0x140038a10,lVar13 + 0x38);
	  if (cVar3 != '\0') {
		uVar9 = hookret(0x140004740);
		plVar10 = hookret(0x140131410,uVar9,100,0x1f,param_1,uVar14,0xffffffff,&DAT_140d760b0,param_1,
								0xffffffff,local_48,4,3,(longlong *)0x0);
		if (plVar10 != (longlong *)0x0) {
		  (**(code **)(*plVar10 + 0xa8))(plVar10,param_1);
		  hook(0x1400604e0,(longlong)plVar10,param_1);
		  hook(0x140060360,(longlong)plVar10,uVar12 | 0xc0);
		  hook(0x140077ac0,(longlong)plVar10,0x40);
		  plVar11 = (longlong *)hookret(0x140003160);
		  hook(0x14051a6b0,plVar11,0xd,plVar10,0);
		}
	  }
	  uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
	  uVar15 = uVar15 + 1;
	} while (uVar15 < uVar16);
  }
  return;


POSTCHARACTER();
}
void UndefinedFunction_140074470(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 auStack56 [2];

  hook(0x14004bd30,param_1);
  iVar5 = *(int *)((longlong)param_1 + 0x68f4);
  *(undefined4 *)((longlong)param_1 + 0x68f4) = *(undefined4 *)(param_1 + 0x2a2);
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar3 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400725d0,(longlong)param_1);
  uVar10 = *(uint *)(param_1 + 0x29f) >> 0x16;
  if ((*(uint *)(param_1 + 0x2a2) & 0x80000000) == 0) {
	if (iVar5 < 0) {
	  hookret(0x14004d420,(longlong)param_1,'\x01');
	  hook(0x14004d3e0,(longlong)param_1,0,0x7e);
	  hook(0x14004d3e0,(longlong)param_1,0,0x7f);
	  hook(0x14004d0f0,param_1,0xffffffff);
	}
  }
  else {
	hookret(0x14004d420,(longlong)param_1,'\0');
  }
  uVar4 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar4 == '\0') {
	return;
  }
  uVar4 = hookret(0x14004b070,(longlong)param_1,2);
  uVar12 = 10;
  if (((char)uVar4 == '\0') && (uVar4 = hookret(0x14004b070,(longlong)param_1,10), (char)uVar4 == '\0' )) {
	bVar1 = false;
  }
  else {
	bVar1 = true;
  }
  uVar4 = hookret(0x14004b070,(longlong)param_1,3);
  uVar11 = 0xb;
  if (((char)uVar4 == '\0') && (uVar4 = hookret(0x14004b070,(longlong)param_1,0xb), (char)uVar4 == '\0 '))
  {
	bVar2 = false;
  }
  else {
	bVar2 = true;
  }
  if ((int)*(uint *)(param_1 + 0x2a2) < 0) {
LAB_140074629:
	if (!bVar1) {
LAB_1400746ac:
	  hook(0x14004d3e0,(longlong)param_1,0,2);
	  bVar9 = 0;
	  uVar4 = uVar12;
	  goto LAB_1400746be;
	}
  }
  else {
	if ((*(uint *)(param_1 + 0x2a2) & 0x40000000) != (*(uint *)(param_1 + 0x29f) & 0x400000)) {
	  lVar6 = hookret(0x14002f960,(longlong)param_1,0);
	  if (((lVar6 == 0) || (uVar4 = hookret(0x14002fa70,lVar6), (char)uVar4 == '\0')) ||
		 (uVar4 = hookret(0x140015e30,lVar6), (char)uVar4 == '\0')) {
		bVar1 = true;
	  }
	  else {
		bVar1 = false;
	  }
	  lVar6 = hookret(0x14002f960,(longlong)param_1,1);
	  if (((lVar6 == 0) || (uVar4 = hookret(0x14002fa70,lVar6), (char)uVar4 == '\0')) ||
		 (uVar4 = hookret(0x140015e30,lVar6), (char)uVar4 == '\0')) {
		bVar2 = true;
	  }
	  else {
		bVar2 = false;
	  }
	  goto LAB_140074629;
	}
	lVar6 = hookret(0x14002f960,(longlong)param_1,0);
	if (((lVar6 == 0) || (uVar4 = hookret(0x14002fa70,lVar6), (char)uVar4 == '\0')) ||
	   (uVar4 = hookret(0x140015e30,lVar6), (char)uVar4 == '\0')) {
	  bVar2 = true;
	}
	else {
	  bVar2 = false;
	}
	lVar6 = hookret(0x14002f960,(longlong)param_1,1);
	if (((lVar6 != 0) && (uVar4 = hookret(0x14002fa70,lVar6), (char)uVar4 != '\0')) &&
	   (uVar4 = hookret(0x140015e30,lVar6), (char)uVar4 != '\0')) goto LAB_1400746ac;
  }
  uVar4 = uVar12;
  if ((uVar10 & 1) != 0) {
	uVar4 = 2;
  }
  hook(0x14004d3e0,(longlong)param_1,0,uVar4);
  bVar9 = 1;
  uVar4 = 2;
  if ((uVar10 & 1) != 0) {
	uVar4 = uVar12;
  }
LAB_1400746be:
  hook(0x14004d3e0,(longlong)param_1,bVar9,uVar4);
  if (bVar2) {
	uVar4 = uVar11;
	if ((uVar10 & 1) != 0) {
	  uVar4 = 3;
	}
	hook(0x14004d3e0,(longlong)param_1,0,uVar4);
	bVar9 = 1;
	uVar4 = 3;
	if ((uVar10 & 1) != 0) {
	  uVar4 = uVar11;
	}
  }
  else {
	hook(0x14004d3e0,(longlong)param_1,0,3);
	bVar9 = 0;
	uVar4 = uVar11;
  }
  hook(0x14004d3e0,(longlong)param_1,bVar9,uVar4);
  uVar4 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar4 != '\0') {
	uVar4 = 0xc;
	if ((uVar10 & 1) != 0) {
	  uVar4 = 4;
	}
	hook(0x14004d3e0,(longlong)param_1,0,uVar4);
	uVar4 = 4;
	if ((uVar10 & 1) != 0) {
	  uVar4 = 0xc;
	}
	hook(0x14004d3e0,(longlong)param_1,1,uVar4);
  }
  if (((*(char *)(param_1 + 0xd26) != '\0') &&
	  (iVar5 = (**(code **)(*param_1 + 0x180))(param_1), iVar5 != 0x154)) &&
	 (20.0 < *(float *)((longlong)param_1 + 0x132c))) {
	puVar7 = hookret(0x140004ae0,(longlong)param_1,auStack56);
	puVar8 = hookret(0x140003aa0);
	hook(0x1402aa5e0,(longlong)puVar8,puVar7,0x23,0xffffffffffffffff);
	*(undefined *)(param_1 + 0xd26) = 0;
  }
  return;


POSTCHARACTER();
}
void FUN_1400700a0(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd21] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd21]), bVar1 == false)) {
	param_1[0xd21] = 0;
  }
  if ((param_1[0xd22] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd22]), bVar1 == false)) {
	param_1[0xd22] = 0;
  }
  if ((param_1[0xd23] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd23]), bVar1 == false)) {
	param_1[0xd23] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x140071920,param_1);
  hook(0x140071e70,(longlong)param_1);
  hook(0x140071b90,(longlong)param_1);
  hook(0x140071bf0,param_1);
  lVar2 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x11);
  if (lVar2 != 0) {
	hookret(0x1400711b0,param_1);
  }
  if ((*(byte *)(param_1 + 0x2a2) & 8) == 0) {
	if (*(char *)(param_1 + 0xd1f) == '\0') {
	  bVar3 = 1;
	  goto LAB_140070187;
	}
  }
  else {
	bVar3 = 0;
LAB_140070187:
	hook(0x14004d3e0,(longlong)param_1,bVar3,0x11);
  }
  if ((*(byte *)(param_1 + 0x2a2) & 0x10) == 0) {
	if (*(char *)(param_1 + 0xd1f) != '\0') goto LAB_1400701bb;
	bVar3 = 1;
  }
  else {
	bVar3 = 0;
  }
  hook(0x14004d3e0,(longlong)param_1,bVar3,0x12);
LAB_1400701bb:
  hook(0x140071020,(longlong)param_1);
  if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	hook(0x14004d3e0,*(longlong *)param_1[0x7e8],0,2);
	uVar4 = 1;
  }
  else {
	hook(0x14004d3e0,*(longlong *)param_1[0x7e8],0,1);
	uVar4 = 2;
  }
  hook(0x14004d3e0,*(longlong *)param_1[0x7e8],1,uVar4);
  hook(0x140071d30,(longlong)param_1);
  return;


POSTCHARACTER();
}
void FUN_14006d670(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;

  hook(0x14004bd30,param_1);
  if (param_1[0xd1e] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar1 == false) {
	  param_1[0xd1e] = 0;
	}
  }
  if (param_1[0xd20] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd20]);
	if (bVar1 == false) {
	  param_1[0xd20] = 0;
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  if ((((*(uint *)(param_1 + 0x29f) & 0x1000) != 0) && (*(char *)(param_1 + 0xd1f) == '\0')) &&
	 (*(float *)((longlong)param_1 + 0x54) <= 200.0)) {
	iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar2 != 0xf) {
	  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar2 != 0x10) {
		iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
		if (iVar2 != 0x11) {
		  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
		  if (iVar2 != 0x13) {
			iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
			if (iVar2 != 0x14) {
			  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
			  if (iVar2 != 0x15) goto LAB_14006d815;
			}
		  }
		}
	  }
	}
	uVar4 = hookret(0x140004740);
	plVar5 = hookret(0x140131660,uVar4,100,0xd,param_1,8,0xffffffff,3,(longlong *)0x0);
	param_1[0xd1e] = (longlong)plVar5;
	if (plVar5 != (longlong *)0x0) {
	  hookret(0x1400604e0,(longlong)plVar5,param_1);
	  (**(code **)(*(longlong *)param_1[0xd1e] + 0xa8))((longlong *)param_1[0xd1e],param_1);
	  hook(0x140060360,param_1[0xd1e],0x20d0);
	  uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	  hook(0x1400604f0,param_1[0xd1e],uVar3);
	  plVar5 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar5,0xd,(longlong *)param_1[0xd1e],0);
	}
	*(undefined *)(param_1 + 0xd1f) = 1;
  }
LAB_14006d815:
  hook(0x14006d9d0,param_1);
  iVar2 = hookret(0x1400383e0,(longlong)param_1);
  if (iVar2 != 7) {
	return;
  }
  if ((*(byte *)(param_1 + 0x2a2) & 0x10) != 0) {
	hookret(0x14004d3e0,(longlong)param_1,1,0x50);
	return;
  }
  hookret(0x14004d3e0,(longlong)param_1,0,0x50);
  return;


POSTCHARACTER();
}
void FUN_14006b7c0(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if (param_1[0xd1f] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd1f]);
	if (bVar1 == false) {
	  param_1[0xd1f] = 0;
	}
  }
  hook(0x14006bad0,param_1);
  uVar2 = hookret(0x140056380,(longlong)param_1,'\x01');
  if ((char)uVar2 != '\0') {
	puVar3 = hookret(0x140004a50,(longlong)param_1,local_18);
	puVar4 = hookret(0x140003aa0);
	hook(0x1402aa5e0,(longlong)puVar4,puVar3,0xb,0xffffffffffffffff);
  }
  return;


POSTCHARACTER();
}
void FUN_140069310(longlong *param_1)

{
PRECHARACTER(param_1);;

  float extraout_XMM0_Da;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x140069a70,(longlong)param_1);
	if (((*(uint *)(param_1 + 0x2a2) & 0x10) != 0) && (-1 < (char)*(uint *)(param_1 + 0x2a2))) {
	  hookret(0x14000cee0,(longlong)param_1);
	  *(float *)(param_1 + 0xd1e) = extraout_XMM0_Da + *(float *)(param_1 + 0xd1e);
	}
  }
  return;


POSTCHARACTER();
}
void FUN_140066c20(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined6 extraout_var;
  longlong *plVar7;
  byte bVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar9;

  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  lVar5 = hookret(0x14002f960,(longlong)param_1,0);
  if (lVar5 != 0) {
	lVar5 = hookret(0x14002f960,(longlong)param_1,0);
	uVar3 = hookret(0x140015e30,lVar5);
	uVar6 = hookret(0x140066b00,(longlong)param_1);
	lVar5 = hookret(0x14002f960,(longlong)param_1,0);
	hook(0x140037700,lVar5,(char)uVar6);
	lVar5 = hookret(0x14004cab0,(longlong)param_1,0);
	uVar2 = hookret(0x140032f40,lVar5);
	if ((char)uVar3 == '\0') {
	  lVar5 = hookret(0x14002f960,(longlong)param_1,0);
	  uVar3 = hookret(0x140015e30,lVar5);
	  if (((char)uVar3 != '\0') && ((int)CONCAT62(extraout_var,uVar2) - 0x300U < 0x100)) {
		plVar7 = (longlong *)hookret(0x14002f960,(longlong)param_1,0);
		(**(code **)(*plVar7 + 0xd0))(plVar7);
	  }
	}
  }
  uVar6 = hookret(0x140066b00,(longlong)param_1);
  if ((char)uVar6 == '\0') {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0xfffffffe;
  }
  else {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 1;
  }
  hook(0x14004bd30,param_1);
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((iVar4 != 0x1c2) && ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0)) {
	uVar3 = hookret(0x14004b070,(longlong)param_1,0);
	if ((char)uVar3 != '\0') {
	  if (((*(uint *)(param_1 + 0x2a2) & 1) == 0) || ((*(uint *)(param_1 + 0x2a2) & 2) == 0)) {
		bVar8 = 0;
	  }
	  else {
		bVar8 = 1;
	  }
	  hook(0x14004d3e0,(longlong)param_1,bVar8,6);
	}
	lVar5 = hookret(0x14002f960,(longlong)param_1,0);
	if (lVar5 != 0) {
	  lVar5 = hookret(0x14004cab0,(longlong)param_1,0);
	  hook(0x1407a3ec0,lVar5);
	  uVar9 = extraout_XMM0_Da;
	  lVar5 = hookret(0x14002f960,(longlong)param_1,0);
	  lVar5 = hookret(0x14004cab0,lVar5,0);
	  hook(0x1400424b0,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da_00),uVar9,lVar5);
	  hook(0x140067320,(longlong)param_1);
	}
  }
  return;


POSTCHARACTER();
}
void FUN_140063a90(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_28 [2];
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x140064dd0,(longlong)param_1);
	hook(0x140064bb0,(longlong)param_1);
	hook(0x140064d50,(longlong)param_1);
	if ((*(byte *)(param_1 + 0x2a2) & 0x80) == 0) {
	  bVar1 = hookret(0x1400557e0,(longlong)(param_1 + 0xd22),-1);
	  if (bVar1 == false) {
		return;
	  }
	  iVar2 = hookret(0x140004a40,(longlong)param_1);
	  puVar3 = hookret(0x140004a50,(longlong)param_1,local_18);
	  puVar4 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar4,puVar3,0x13,(longlong)iVar2);
	  hook(0x1400239c0,local_28,0xffffffffffffffff);
	  puVar3 = local_28;
	}
	else {
	  bVar1 = hookret(0x140061580,(longlong)(param_1 + 0xd22),-1);
	  if (bVar1 == false) {
		return;
	  }
	  iVar2 = hookret(0x140004a40,(longlong)param_1);
	  puVar3 = hookret(0x140004a50,(longlong)param_1,local_28);
	  puVar4 = hookret(0x140003aa0);
	  puVar3 = hookret(0x1402aad60,(longlong)puVar4,local_18,puVar3,0x13,(longlong)iVar2,param_1,0,
							 0x3f800000,(longlong)param_1);
	}
	thunk_hook(0x14000b010,(longlong)(param_1 + 0xd22),(longlong)puVar3);
  }
  return;


POSTCHARACTER();
}
void FUN_1400e2800(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 local_38 [2];
  undefined8 local_28 [2];

  uVar6 = hookret(0x140066b00,(longlong)param_1);
  lVar7 = hookret(0x140079d30,(longlong)param_1);
  if (lVar7 != 0) {
	lVar7 = hookret(0x140079d30,(longlong)param_1);
	bVar2 = hookret(0x140001b80,lVar7);
	if (bVar2 == false) {
	  hookret(0x14007a060,(longlong)param_1,0);
	}
  }
  lVar7 = hookret(0x1400e2620,(longlong)param_1,0);
  if (lVar7 != 0) {
	lVar7 = hookret(0x1400e2620,(longlong)param_1,0);
	bVar2 = hookret(0x140001b80,lVar7);
	if (bVar2 == false) {
	  hookret(0x1400e2da0,(longlong)param_1,0,0);
	}
  }
  lVar7 = hookret(0x1400e2620,(longlong)param_1,1);
  if (lVar7 != 0) {
	lVar7 = hookret(0x1400e2620,(longlong)param_1,1);
	bVar2 = hookret(0x140001b80,lVar7);
	if (bVar2 == false) {
	  hookret(0x1400e2da0,(longlong)param_1,0,1);
	}
  }
  uVar5 = *(uint *)(param_1 + 0x29f);
  hook(0x14004bd30,param_1);
  uVar8 = hookret(0x140066b00,(longlong)param_1);
  if ((char)uVar6 != (char)uVar8) {
	if ((char)uVar6 == '\0') {
	  iVar3 = hookret(0x140004a40,(longlong)param_1);
	  puVar9 = hookret(0x140004a50,(longlong)param_1,local_38);
	  puVar10 = hookret(0x140003aa0);
	  hook(0x1402aad60,(longlong)puVar10,local_28,puVar9,2,(longlong)iVar3,param_1,0,0x3f800000,
					(longlong)param_1);
	  *(undefined4 *)((longlong)param_1 + 0x6804) = 3;
	}
	else {
	  *(undefined4 *)((longlong)param_1 + 0x6804) = 0;
	}
  }
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar3 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400e0e10,(longlong)param_1);
  uVar1 = *(uint *)(param_1 + 0x29f);
  hook(0x1400e3370,(longlong)param_1);
  lVar7 = hookret(0x14002f960,(longlong)param_1,0);
  if (lVar7 != 0) {
	lVar7 = hookret(0x14002f960,(longlong)param_1,0);
	uVar4 = hookret(0x140015e30,lVar7);
	if (((char)uVar4 == '\0') && (uVar6 = hookret(0x140066b00,(longlong)param_1), (char)uVar6 == '\x01 '))
	{
	  lVar7 = hookret(0x14002f960,(longlong)param_1,0);
	  hook(0x140037700,lVar7,'\x01');
	}
  }
  lVar7 = hookret(0x14002f960,(longlong)param_1,0);
  if (lVar7 != 0) {
	plVar11 = (longlong *)hookret(0x140056010,(longlong)param_1,0xe);
	if ((((byte)(uVar1 >> 0x16) & 1) != ((byte)(uVar5 >> 0x16) & 1)) && (plVar11 != (longlong *)0 x0)
	   ) {
	  param_1[0xcf7] = 0;
	  (**(code **)(*plVar11 + 0xd8))(plVar11);
	  plVar11 = (longlong *)0x0;
	}
	uVar6 = hookret(0x140066b00,(longlong)param_1);
	if (((char)uVar6 == '\0') || (plVar11 != (longlong *)0x0)) {
	  uVar6 = hookret(0x140066b00,(longlong)param_1);
	  if (((char)uVar6 != '\0') || (plVar11 == (longlong *)0x0)) goto LAB_1400e2b18;
	  plVar11 = (longlong *)0x0;
	}
	else {
	  uVar5 = 0x80000000;
	  if ((uVar1 >> 0x16 & 1) != 0) {
		uVar5 = 0x40000000;
	  }
	  uVar12 = hookret(0x140004740);
	  plVar11 = hookret(0x140131310,uVar12,0x96,0xc,param_1,0xffffffff,~uVar5,&DAT_140d2acf0,
							  &DAT_140d76030,4,3,(longlong *)0x0);
	  if (plVar11 == (longlong *)0x0) goto LAB_1400e2b18;
	  lVar7 = *plVar11;
	  uVar12 = hookret(0x14002f960,(longlong)param_1,0);
	  (**(code **)(lVar7 + 0xa8))(plVar11,uVar12);
	  hook(0x1400604e0,(longlong)plVar11,param_1);
	  hook(0x140060360,(longlong)plVar11,0x221228e0);
	  plVar13 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar13,0xd,plVar11,0);
	}
	hook(0x140056f30,(longlong)param_1,0xe,plVar11);
  }
LAB_1400e2b18:
  plVar11 = (longlong *)hookret(0x140056010,(longlong)param_1,0xf);
  if (((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) || (plVar11 != (longlong *)0x0)) {
	if (((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) && (plVar11 != (longlong *)0x0)) {
	  param_1[0xcf8] = 0;
	  (**(code **)(*plVar11 + 0xd8))();
	}
  }
  else {
	uVar12 = hookret(0x140004740);
	plVar11 = hookret(0x140131310,uVar12,100,0x14,param_1,0xffffffff,0xffffffff,&DAT_140d2acf0,
							&DAT_140d76030,4,3,(longlong *)0x0);
	if (plVar11 != (longlong *)0x0) {
	  (**(code **)(*plVar11 + 0xa8))(plVar11,param_1);
	  hook(0x1400604e0,(longlong)plVar11,param_1);
	  hook(0x140060360,(longlong)plVar11,0x221228e0);
	  plVar13 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar13,0xd,plVar11,0);
	  hook(0x140056f30,(longlong)param_1,0xf,plVar11);
	}
  }
  return;



POSTCHARACTER();
}
void FUN_1400dff60(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  float extraout_XMM0_Da;
  float fVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar12;
  undefined8 local_38 [2];
  undefined8 local_28 [4];

  hook(0x14004bd30,param_1);
  if (param_1[0xd1e] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar1 == false) {
	  param_1[0xd1e] = 0;
	}
  }
  if (param_1[0xd1f] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd1f]);
	if (bVar1 == false) {
	  param_1[0xd1f] = 0;
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400e09c0,(longlong)param_1);
	uVar4 = hookret(0x140041e50,(longlong)param_1);
	if (((uVar4 & 0x10) != 0) && (*(char *)(param_1 + 0xd20) == '\0')) {
	  uVar5 = hookret(0x140004740);
	  plVar6 = hookret(0x140131660,uVar5,100,0x1c,param_1,1,0xffffffff,3,(longlong *)0x0);
	  param_1[0xd1f] = (longlong)plVar6;
	  if (plVar6 != (longlong *)0x0) {
		hookret(0x1400604e0,(longlong)plVar6,param_1);
		(**(code **)(*(longlong *)param_1[0xd1f] + 0xa8))((longlong *)param_1[0xd1f],param_1);
		hook(0x140060360,param_1[0xd1f],0x1020c0);
		plVar6 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar6,0xd,(longlong *)param_1[0xd1f],0);
	  }
	  *(undefined *)(param_1 + 0xd20) = 1;
	}
	uVar4 = hookret(0x140041e50,(longlong)param_1);
	if (((uVar4 & 0x10) == 0) && (*(char *)(param_1 + 0xd20) != '\0')) {
	  if (param_1[0xd1f] != 0) {
		bVar1 = hookret(0x140001b80,param_1[0xd1f]);
		if (bVar1 == false) {
		  param_1[0xd1f] = 0;
		}
	  }
	  plVar6 = (longlong *)param_1[0xd1f];
	  if (plVar6 != (longlong *)0x0) {
		bVar1 = hookret(0x140001b80,(longlong)plVar6);
		if (bVar1 != false) {
		  (**(code **)(*plVar6 + 0xd8))(plVar6);
		  param_1[0xd1f] = 0;
		}
	  }
	  *(undefined *)(param_1 + 0xd20) = 0;
	}
	if ((*(byte *)(param_1 + 0x2a2) & 1) == 0) {
	  *(undefined4 *)((longlong)param_1 + 0x6904) = 0;
	  *(undefined *)((longlong)param_1 + 0x6914) = 0;
	  if (*(int *)(param_1 + 0xd21) != 0) {
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		puVar9 = hookret(0x140003aa0);
		hook(0x1402aa5e0,(longlong)puVar9,puVar8,0x4d,(longlong)iVar3);
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		puVar9 = hookret(0x140003aa0);
		hook(0x1402aa5e0,(longlong)puVar9,puVar8,0x4e,(longlong)iVar3);
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		puVar9 = hookret(0x140003aa0);
		hook(0x1402aa5e0,(longlong)puVar9,puVar8,0x4f,(longlong)iVar3);
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		puVar9 = hookret(0x140003aa0);
		hook(0x1402aa5e0,(longlong)puVar9,puVar8,0x6f,(longlong)iVar3);
		*(undefined4 *)(param_1 + 0xd21) = 0;
		lVar10 = hookret(0x14004cab0,(longlong)param_1,3);
		if (lVar10 != 0) {
		  hookret(0x1405297e0,lVar10,0xffff);
		}
	  }
	}
	else {
	  if (*(char *)((longlong)param_1 + 0x6914) == '\0') {
		puVar7 = (uint *)hookret(0x1400046d0);
		uVar2 = thunk_hookret(0x1404600f0,puVar7);
		*(undefined *)((longlong)param_1 + 0x6914) = 1;
		*(uint *)(param_1 + 0xd22) = uVar2 & 1;
	  }
	  hook(0x14000cee0,(longlong)param_1);
	  uVar12 = 0x3f800000;
	  fVar11 = extraout_XMM0_Da + *(float *)((longlong)param_1 + 0x6904);
	  *(float *)((longlong)param_1 + 0x6904) = fVar11;
	  iVar3 = -1;
	  if ((*(int *)(param_1 + 0xd21) == 0) && (iVar3 = -1, 30.0 < fVar11)) {
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		if (*(int *)(param_1 + 0xd22) == 0) {
		  puVar8 = hookret(0x140004ae0,(longlong)param_1,local_38);
		  puVar9 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar9,local_28,puVar8,0x4d,(longlong)iVar3,param_1,7,uVar12,
						(longlong)param_1);
		  iVar3 = 0xf8;
		}
		else {
		  puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		  puVar9 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar9,local_38,puVar8,0x6f,(longlong)iVar3,param_1,7,uVar12,
						(longlong)param_1);
		  iVar3 = 0xff;
		}
		*(int *)(param_1 + 0xd21) = *(int *)(param_1 + 0xd21) + 1;
	  }
	  if ((*(int *)(param_1 + 0xd21) == 1) && (180.0 < *(float *)((longlong)param_1 + 0x6904))) {
		if (*(int *)(param_1 + 0xd22) == 0) {
		  iVar3 = hookret(0x140004a40,(longlong)param_1);
		  puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		  puVar9 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar9,local_38,puVar8,0x4e,(longlong)iVar3,param_1,7,uVar12,
						(longlong)param_1);
		  iVar3 = 0xf9;
		}
		*(int *)(param_1 + 0xd21) = *(int *)(param_1 + 0xd21) + 1;
	  }
	  if ((*(int *)(param_1 + 0xd21) == 2) && (580.0 < *(float *)((longlong)param_1 + 0x6904))) {
		if (*(int *)(param_1 + 0xd22) == 0) {
		  iVar3 = hookret(0x140004a40,(longlong)param_1);
		  puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		  puVar9 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar9,local_38,puVar8,0x4f,(longlong)iVar3,param_1,7,uVar12,
						(longlong)param_1);
		  iVar3 = 0xfa;
		}
		*(int *)(param_1 + 0xd21) = *(int *)(param_1 + 0xd21) + 1;
	  }
	  if ((*(int *)(param_1 + 0xd21) == 3) && (820.0 < *(float *)((longlong)param_1 + 0x6904))) {
		*(undefined8 *)((longlong)param_1 + 0x6904) = 0;
	  }
	  if (-1 < iVar3) {
		lVar10 = hookret(0x140528cb0,(longlong)param_1,iVar3 + 0x400U);
		if (lVar10 != 0) {
		  (**(code **)(*param_1 + 0xd8))(param_1,3,iVar3 + 0x400U);
		  lVar10 = hookret(0x14004cab0,(longlong)param_1,3);
		  if (lVar10 != 0) {
			hookret(0x1400e06e0,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da_00),uVar12,lVar10);
		  }
		}
	  }
	}
	hook(0x1400e0960,(longlong)param_1);
  }
  return;



POSTCHARACTER();
}
void FUN_1400dd840(longlong *param_1)

{
PRECHARACTER(param_1);;

  longlong lVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;

  hook(0x14004bd30,param_1);
  if ((param_1[0xd22] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd22]), bVar2 == false)) {
	param_1[0xd22] = 0;
  }
  hook(0x1400dbe70,(longlong)param_1);
  if ((*(uint *)(param_1 + 0x2a2) & 0x80000000) != 0) {
	pfVar4 = (float *)hookret(0x1400daa30,(longlong)param_1);
	pfVar5 = (float *)hookret(0x140001b50,(longlong)param_1);
	hook(0x14000bfd0,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),pfVar5,
				  (undefined4 *)&stack0xffffffffffffffd8,pfVar4);
	hook(0x1400dd790,(longlong)param_1);
	uVar7 = hookret(0x14001bad0,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),extraout_XMM0_Da_00,
						  (float *)&stack0xffffffffffffffd8);
	puVar6 = hookret(0x140001210,uVar7,pfVar4,(undefined4 *)&stack0xffffffffffffffe8,
						   (float *)&stack0xffffffffffffffd8);
	hook(0x14000bf40,(undefined4 *)(param_1 + 10),puVar6);
	if (((*(uint *)(param_1 + 0x29f) & 0x2000) != 0) &&
	   (iVar3 = hookret(0x1400dd760,(longlong)param_1), -1 < iVar3)) {
	  *(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) | 2;
	  lVar1 = *param_1;
	  hookret(0x1400dd760,(longlong)param_1);
	  (**(code **)(lVar1 + 400))(param_1);
	  hook(0x1400dda30,(longlong)param_1,0xffffffff);
	}
  }
  hook(0x1400ddf40,(longlong)param_1);
  iVar3 = hookret(0x1400383e0,(longlong)param_1);
  if (iVar3 != 7) {
	return;
  }
  iVar3 = hookret(0x1400129c0,(longlong)(param_1 + 0x5ae));
  if ((iVar3 == 1) && (*(char *)((longlong)param_1 + 0x690c) == '\0')) {
	if ((param_1[0xd22] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd22]), bVar2 == false)) {
	  param_1[0xd22] = 0;
	}
	plVar8 = (longlong *)param_1[0xd22];
	if ((plVar8 != (longlong *)0x0) && (bVar2 = hookret(0x140001b80,(longlong)plVar8), bVar2 != false) ) {
	  (**(code **)(*plVar8 + 0x78))(plVar8);
	  param_1[0xd22] = 0;
	}
  }
  iVar3 = hookret(0x1400129c0,(longlong)(param_1 + 0x5ae));
  if ((iVar3 == 0) && (*(char *)((longlong)param_1 + 0x690c) != '\0')) {
	if ((param_1[0xd22] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd22]), bVar2 == false)) {
	  param_1[0xd22] = 0;
	}
	plVar8 = (longlong *)param_1[0xd22];
	if ((plVar8 != (longlong *)0x0) && (bVar2 = hookret(0x140001b80,(longlong)plVar8), bVar2 != false) ) {
	  (**(code **)(*plVar8 + 0x78))(plVar8);
	  param_1[0xd22] = 0;
	}
  }
  if (param_1[0xd22] != 0) {
	return;
  }
  iVar3 = hookret(0x1400129c0,(longlong)(param_1 + 0x5ae));
  if (iVar3 == 1) {
	uVar7 = hookret(0x140004740);
	plVar8 = hookret(0x140131660,uVar7,100,0x1e,param_1,2,0xffffffff,3,(longlong *)0x0);
	*(undefined *)((longlong)param_1 + 0x690c) = 1;
  }
  else {
	iVar3 = hookret(0x1400129c0,(longlong)(param_1 + 0x5ae));
	if (iVar3 != 0) goto LAB_1400de1da;
	uVar7 = hookret(0x140004740);
	plVar8 = hookret(0x140131660,uVar7,100,0x1e,param_1,1,0xffffffff,3,(longlong *)0x0);
	*(undefined *)((longlong)param_1 + 0x690c) = 0;
  }
  param_1[0xd22] = (longlong)plVar8;
LAB_1400de1da:
  plVar8 = (longlong *)param_1[0xd22];
  if (plVar8 != (longlong *)0x0) {
	(**(code **)(*plVar8 + 0xa8))(plVar8,*(undefined8 *)(param_1[0x7e8] + 0x18));
	hook(0x1400604e0,param_1[0xd22],param_1);
	hook(0x140060360,param_1[0xd22],0x221028c0);
	plVar8 = (longlong *)hookret(0x140003160);
	hook(0x14051a6b0,plVar8,0xd,(longlong *)param_1[0xd22],0);
  }
  return;



POSTCHARACTER();
}
void UndefinedFunction_1400dabd0(longlong *param_1)

{
PRECHARACTER(param_1);;

  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float afStack280 [4];
  undefined4 auStack264 [4];
  undefined4 auStack248 [16];
  undefined auStack184 [64];
  undefined auStack120 [96];

  hook(0x14004bd30,param_1);
  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar2 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  uVar3 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar3 != '\0') {
	hookret(0x1400db800,(longlong)param_1);
  }
  uVar3 = *(uint *)(param_1 + 0x2a2);
  if ((uVar3 & 1) == 0) {
LAB_1400dac96:
	if ((uVar3 & 2) == 0) goto LAB_1400dae21;
  }
  else {
	hook(0x14000b8c0,(ulonglong)*(uint *)(param_1 + 0x81c));
	fVar14 = 0.0001;
	if ((extraout_XMM0_Da <= 0.0001) ||
	   (hook(0x14000b8c0,(ulonglong)*(uint *)(param_1 + 0x81d)), extraout_XMM0_Da_00 <= fVar14))
	goto LAB_1400dac96;
  }
  fVar14 = *(float *)(param_1 + 0x81d);
  uVar4 = *(undefined4 *)(param_1 + 0x81c);
  uVar12 = *(uint *)(param_1 + 0x29f) >> 0x16;
  if ((uVar12 & 1) != 0) {
	fVar14 = (float)((uint)fVar14 ^ 0x80000000);
  }
  if ((uVar3 & 2) != 0) {
	puVar5 = (undefined4 *)hookret(0x1400daa30,(longlong)param_1);
	uVar4 = *puVar5;
	if ((uVar12 & 1) == 0) {
	  fVar14 = 1.0;
	}
	else {
	  fVar14 = -1.0;
	}
	fVar14 = fVar14 * (float)puVar5[1];
  }
  uVar15 = 0;
  hook(0x14000baa0,(longlong)auStack248);
  hook(0x14000baa0,(longlong)auStack184);
  if ((uVar12 & 1) == 0) {
	fVar13 = 90.0;
  }
  else {
	fVar13 = -90.0;
  }
  uVar9 = hookret(0x140080e70,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da_01),fVar13 * 0.01745329,
						(longlong)auStack184);
  pfVar6 = (float *)hookret(0x140001030,uVar9,uVar4,fVar14,0,auStack264);
  hook(0x1400db420,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_02),CONCAT44(uVar15,uVar4),auStack 248,
				pfVar6,(float *)&DAT_140d2ab80,&DAT_140d76030);
  hook(0x1402f44c0,afStack280,&DAT_140d2acf0);
  lVar7 = hookret(0x14000df60,(longlong)auStack184,(longlong)auStack120,(longlong)auStack248);
  hook(0x14002fce0,afStack280,lVar7);
  hook(0x14002fc40,(longlong)param_1,afStack280);
  puVar5 = (undefined4 *)hookret(0x140001b50,(longlong)param_1);
  if (((float)puVar5[1] <= 70.0 && (float)puVar5[1] != 70.0) &&
	 ((*(byte *)(param_1 + 0x2a2) & 2) == 0)) {
	puVar8 = hookret(0x140001030,CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03),*puVar5,0x428c0000,
						   puVar5[2],auStack264);
	hook(0x140002af0,(longlong)param_1,puVar8);
  }
  if (80.0 < (float)puVar5[1] || (float)puVar5[1] == 80.0) {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0x7fffffff;
  }
  else {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 0x80000000;
  }
LAB_1400dae21:
  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar2 == 0x28) {
	uVar3 = 1;
  }
  else {
	iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar2 == 0x29) {
	  uVar3 = 2;
	}
	else {
	  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar2 != 0x2a) {
		return;
	  }
	  uVar3 = 3;
	}
  }
  lVar7 = hookret(0x140001a90);
  cVar1 = hookret(0x140038a10,lVar7 + 0x38);
  if (cVar1 != '\0') {
	uVar4 = 0x80000000;
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  uVar4 = 0x40000000;
	}
	if (uVar3 < 3) {
	  uVar9 = hookret(0x140004740);
	  plVar10 = hookret(0x140131410,uVar9,100,0x11,param_1,1,uVar4,&DAT_140d2acf0,param_1,0xffffffff,
							  &DAT_140d76030,4,3,(longlong *)0x0);
	  if (plVar10 != (longlong *)0x0) {
		(**(code **)(*plVar10 + 0xa8))(plVar10,param_1);
		hook(0x1400604e0,(longlong)plVar10,param_1);
		hook(0x140060360,(longlong)plVar10,0xc0);
		hook(0x140077ac0,(longlong)plVar10,0x40);
		plVar11 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar11,0xd,plVar10,0);
	  }
	  uVar9 = hookret(0x140004740);
	  plVar10 = hookret(0x140131410,uVar9,100,0x11,param_1,2,uVar4,&DAT_140d2acf0,param_1,0xffffffff,
							  &DAT_140d76030,4,3,(longlong *)0x0);
	  if (plVar10 != (longlong *)0x0) {
		(**(code **)(*plVar10 + 0xa8))(plVar10,param_1);
		hook(0x1400604e0,(longlong)plVar10,param_1);
		hook(0x140060360,(longlong)plVar10,0xc0);
		hook(0x140077ac0,(longlong)plVar10,0x40);
		plVar11 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar11,0xd,plVar10,0);
	  }
	  uVar9 = hookret(0x140004740);
	  uVar15 = 0x20;
	}
	else {
	  if (uVar3 != 3) {
		return;
	  }
	  uVar9 = hookret(0x140004740);
	  plVar10 = hookret(0x140131410,uVar9,100,0x11,param_1,1,uVar4,&DAT_140d2acf0,param_1,0xffffffff,
							  &DAT_140d76030,4,3,(longlong *)0x0);
	  if (plVar10 != (longlong *)0x0) {
		(**(code **)(*plVar10 + 0xa8))(plVar10,param_1);
		hook(0x1400604e0,(longlong)plVar10,param_1);
		hook(0x140060360,(longlong)plVar10,0xc0);
		hook(0x140077ac0,(longlong)plVar10,0x40);
		plVar11 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar11,0xd,plVar10,0);
	  }
	  uVar9 = hookret(0x140004740);
	  uVar15 = 0x40;
	}
	plVar10 = hookret(0x140131410,uVar9,0x96,10,param_1,uVar15,uVar4,&DAT_140d2acf0,param_1,0xffffffff ,
							&DAT_140d76030,4,3,(longlong *)0x0);
	if (plVar10 != (longlong *)0x0) {
	  (**(code **)(*plVar10 + 0xa8))(plVar10,param_1);
	  hook(0x1400604e0,(longlong)plVar10,param_1);
	  hook(0x140060360,(longlong)plVar10,0xc0);
	  hook(0x140077ac0,(longlong)plVar10,0x40);
	  plVar11 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar11,0xd,plVar10,0);
	}
  }
  return;



POSTCHARACTER();
}
void FUN_1400d76d0(longlong *param_1)

{
PRECHARACTER(param_1);;

  float fVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float extraout_XMM0_Da;
  undefined8 local_28 [2];
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if (param_1[0xd1e] != 0) {
	bVar4 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar4 == false) {
	  param_1[0xd1e] = 0;
	}
  }
  if (param_1[0xd1f] != 0) {
	bVar4 = hookret(0x140001b80,param_1[0xd1f]);
	if (bVar4 == false) {
	  param_1[0xd1f] = 0;
	}
  }
  if (param_1[0xd20] != 0) {
	bVar4 = hookret(0x140001b80,param_1[0xd20]);
	if (bVar4 == false) {
	  param_1[0xd20] = 0;
	}
  }
  if (param_1[0xd1e] != 0) {
	iVar5 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar5 == 0x1b8) {
	  if (param_1[0xd1e] != 0) {
		bVar4 = hookret(0x140001b80,param_1[0xd1e]);
		if (bVar4 == false) {
		  param_1[0xd1e] = 0;
		}
	  }
	  plVar2 = (longlong *)param_1[0xd1e];
	  if (plVar2 != (longlong *)0x0) {
		bVar4 = hookret(0x140001b80,(longlong)plVar2);
		if (bVar4 != false) {
		  (**(code **)(*plVar2 + 0x78))(plVar2);
		  param_1[0xd1e] = 0;
		}
	  }
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	iVar5 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar5 != 0x1b8) {
	  hookret(0x1400d7ec0,param_1);
	}
	hook(0x1400d84d0,param_1);
	if (((((*(uint *)((longlong)param_1 + 0x14f4) >> 0xd & 1) != 0) &&
		 ((*(uint *)(param_1 + 0x29f) & 0x80000) != 0)) ||
		((*(uint *)((longlong)param_1 + 0x14f4) >> 0x11 & 1) != 0)) ||
	   ((*(byte *)(param_1 + 0x29f) & 1) != 0)) {
	  *(undefined *)(param_1 + 0x2a2) = 0;
	}
	if ((*(uint *)(param_1 + 0x2a2) & 0x100) == 0) {
	  if (param_1[0xd20] != 0) {
		bVar4 = hookret(0x140001b80,param_1[0xd20]);
		if (bVar4 == false) {
		  param_1[0xd20] = 0;
		}
		plVar2 = (longlong *)param_1[0xd20];
		if (plVar2 != (longlong *)0x0) {
		  bVar4 = hookret(0x140001b80,(longlong)plVar2);
		  if (bVar4 != false) {
			(**(code **)(*plVar2 + 0xd8))();
			param_1[0xd20] = 0;
		  }
		}
		if (((((*(float *)(param_1 + 0x81c) == 0.0) &&
			  (*(float *)((longlong)param_1 + 0x40e4) == 0.0)) &&
			 ((*(float *)(param_1 + 0x81d) == 0.0 &&
			  ((*(float *)((longlong)param_1 + 0x40ec) == 0.0 &&
			   (*(float *)(param_1 + 0x81e) == 0.0)))))) &&
			(*(float *)((longlong)param_1 + 0x40f4) == 0.0)) &&
		   (((*(float *)(param_1 + 0x81f) == 0.0 && (*(float *)((longlong)param_1 + 0x40fc) == 0. 0))
			&& (*(float *)(param_1 + 0x822) == 0.0)))) {
		  bVar4 = true;
		}
		else {
		  bVar4 = false;
		}
		if (((*(uint *)(param_1 + 0x2a1) & 8) == 0) &&
		   ((*(uint *)((longlong)param_1 + 0x14f4) & 0x200000) == 0)) {
		  bVar3 = false;
		}
		else {
		  bVar3 = true;
		}
		if ((!bVar4) && (!bVar3)) {
		  if ((*(uint *)(param_1 + 0x2a1) & 0x10) == 0) {
			*(undefined4 *)((longlong)param_1 + 0x40ec) = 0xbf400000;
		  }
		  else {
			*(undefined4 *)((longlong)param_1 + 0x40ec) = 0xbf2ed917;
		  }
		}
	  }
	}
	else {
	  hook(0x1400d7240,param_1);
	}
	iVar5 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar5 == 0) {
	  hookret(0x14000cee0,(longlong)param_1);
	  fVar1 = *(float *)(param_1 + 0xd23);
	  *(float *)(param_1 + 0xd23) = extraout_XMM0_Da + fVar1;
	  if (70.0 < extraout_XMM0_Da + fVar1) {
		lVar7 = hookret(0x140001a90);
		iVar5 = hookret(0x140221120,lVar7);
		if ((iVar5 != 1) && (iVar5 != 0xc)) {
		  iVar5 = hookret(0x140004a40,(longlong)param_1);
		  puVar8 = (uint *)hookret(0x1400046d0);
		  uVar6 = thunk_hookret(0x1404600f0,puVar8);
		  puVar9 = hookret(0x140004a50,(longlong)param_1,local_28);
		  puVar10 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar10,local_18,puVar9,uVar6 & 1,(longlong)iVar5,param_1,0,
						0x3f800000,(longlong)param_1);
		}
		*(undefined4 *)(param_1 + 0xd23) = 0;
	  }
	}
  }
  return;



POSTCHARACTER();
}*/
void hookCharacterTicks(Trampoline* tramp)
{
	InjectHook(_addr(0x1400f2eb0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400d4b30), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400cdc90), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400cd200), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400ca240), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400c84f0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400c4c10), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400be8f0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400bbba0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400f0d70), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400b8a00), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400b5010), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400ae4a0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400ac6e0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400aaeb0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400a8830), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400a66e0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400a1410), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14009ceb0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140099e30), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400edf80), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140097740), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140095b40), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140092b60), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140090810), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14008e370), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14008c3c0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140089400), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140081310), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14007d990), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14007ad00), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400ebbb0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140079eb0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140077670), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140074470), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400700a0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14006d670), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14006b7c0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140069310), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140066c20), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140063a90), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400e2800), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400dff60), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400dd840), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400dabd0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400d76d0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14001af4f), tramp->Jump(FUN_1400199c0), PATCH_CALL);
	InjectHook(_addr(0x1405b6c99), tramp->Jump(FUN_1405ab9a0), PATCH_CALL);
	/*InjectHook(_addr(0x1400f2eb0), tramp->Jump(UndefinedFunction_1400f2eb0), PATCH_JUMP);
	InjectHook(_addr(0x1400d4b30), tramp->Jump(FUN_1400d4b30), PATCH_JUMP);
	InjectHook(_addr(0x1400cdc90), tramp->Jump(FUN_1400cdc90), PATCH_JUMP);
	InjectHook(_addr(0x1400cd200), tramp->Jump(FUN_1400cd200), PATCH_JUMP);
	InjectHook(_addr(0x1400ca240), tramp->Jump(FUN_1400ca240), PATCH_JUMP);
	InjectHook(_addr(0x1400c84f0), tramp->Jump(UndefinedFunction_1400c84f0), PATCH_JUMP);
	InjectHook(_addr(0x1400c4c10), tramp->Jump(FUN_1400c4c10), PATCH_JUMP);
	InjectHook(_addr(0x1400be8f0), tramp->Jump(FUN_1400be8f0), PATCH_JUMP);
	InjectHook(_addr(0x1400bbba0), tramp->Jump(UndefinedFunction_1400bbba0), PATCH_JUMP);
	InjectHook(_addr(0x1400f0d70), tramp->Jump(FUN_1400f0d70), PATCH_JUMP);
	InjectHook(_addr(0x1400b8a00), tramp->Jump(UndefinedFunction_1400b8a00), PATCH_JUMP);
	InjectHook(_addr(0x1400b5010), tramp->Jump(FUN_1400b5010), PATCH_JUMP);
	InjectHook(_addr(0x1400ae4a0), tramp->Jump(FUN_1400ae4a0), PATCH_JUMP);
	InjectHook(_addr(0x1400ac6e0), tramp->Jump(FUN_1400ac6e0), PATCH_JUMP);
	InjectHook(_addr(0x1400aaeb0), tramp->Jump(UndefinedFunction_1400aaeb0), PATCH_JUMP);
	InjectHook(_addr(0x1400a8830), tramp->Jump(FUN_1400a8830), PATCH_JUMP);
	InjectHook(_addr(0x1400a66e0), tramp->Jump(FUN_1400a66e0), PATCH_JUMP);
	InjectHook(_addr(0x1400a1410), tramp->Jump(UndefinedFunction_1400a1410), PATCH_JUMP);
	InjectHook(_addr(0x14009ceb0), tramp->Jump(FUN_14009ceb0), PATCH_JUMP);
	InjectHook(_addr(0x140099e30), tramp->Jump(FUN_140099e30), PATCH_JUMP);
	InjectHook(_addr(0x1400edf80), tramp->Jump(FUN_1400edf80), PATCH_JUMP);
	InjectHook(_addr(0x140097740), tramp->Jump(FUN_140097740), PATCH_JUMP);
	InjectHook(_addr(0x140095b40), tramp->Jump(FUN_140095b40), PATCH_JUMP);
	InjectHook(_addr(0x140092b60), tramp->Jump(UndefinedFunction_140092b60), PATCH_JUMP);
	InjectHook(_addr(0x140090810), tramp->Jump(FUN_140090810), PATCH_JUMP);
	InjectHook(_addr(0x14008e370), tramp->Jump(FUN_14008e370), PATCH_JUMP);
	InjectHook(_addr(0x14008c3c0), tramp->Jump(FUN_14008c3c0), PATCH_JUMP);
	InjectHook(_addr(0x140089400), tramp->Jump(FUN_140089400), PATCH_JUMP);
	InjectHook(_addr(0x140081310), tramp->Jump(FUN_140081310), PATCH_JUMP);
	InjectHook(_addr(0x14007d990), tramp->Jump(FUN_14007d990), PATCH_JUMP);
	InjectHook(_addr(0x14007ad00), tramp->Jump(UndefinedFunction_14007ad00), PATCH_JUMP);
	InjectHook(_addr(0x1400ebbb0), tramp->Jump(FUN_1400ebbb0), PATCH_JUMP);
	InjectHook(_addr(0x140079eb0), tramp->Jump(FUN_140079eb0), PATCH_JUMP);
	InjectHook(_addr(0x140077670), tramp->Jump(FUN_140077670), PATCH_JUMP);
	InjectHook(_addr(0x140074470), tramp->Jump(UndefinedFunction_140074470), PATCH_JUMP);
	InjectHook(_addr(0x1400700a0), tramp->Jump(FUN_1400700a0), PATCH_JUMP);
	InjectHook(_addr(0x14006d670), tramp->Jump(FUN_14006d670), PATCH_JUMP);
	InjectHook(_addr(0x14006b7c0), tramp->Jump(FUN_14006b7c0), PATCH_JUMP);
	InjectHook(_addr(0x140069310), tramp->Jump(FUN_140069310), PATCH_JUMP);
	InjectHook(_addr(0x140066c20), tramp->Jump(FUN_140066c20), PATCH_JUMP);
	InjectHook(_addr(0x140063a90), tramp->Jump(FUN_140063a90), PATCH_JUMP);
	InjectHook(_addr(0x1400e2800), tramp->Jump(FUN_1400e2800), PATCH_JUMP);
	InjectHook(_addr(0x1400dff60), tramp->Jump(FUN_1400dff60), PATCH_JUMP);
	InjectHook(_addr(0x1400dd840), tramp->Jump(FUN_1400dd840), PATCH_JUMP);
	InjectHook(_addr(0x1400dabd0), tramp->Jump(UndefinedFunction_1400dabd0), PATCH_JUMP);
	InjectHook(_addr(0x1400d76d0), tramp->Jump(FUN_1400d76d0), PATCH_JUMP);
	*/
};
//void FUN_1402594a0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
//
//{
//	PREPHYSICS(param_1, param_2, param_3, param_4);
//	while (true) {
//		Sleep(5000);
//	}
//	longlong lVar1 = 0;
//	longlong* plVar2 = 0;
//	ulonglong uVar3 = 0;
//	ulonglong uVar4 = 0;
//	undefined uVar5 = 0;
//	undefined7 uVar6 = 0;
//	undefined4 local_res8 = 0;
//	undefined4 local_resc = 0;
//
//	uVar5 = (undefined)param_3;
//	uVar6 = (undefined7)((ulonglong)param_3 >> 8);
//	printf("l%d\n", __LINE__);
//	hook(0x140521df0, param_1);
//	printf("l%d\n", __LINE__);
//	hook(0x140258540, param_1);
//	printf("l%d\n", __LINE__);
//	hook(0x140289c30, *(longlong*)(param_1 + 0x401c0), param_2, CONCAT71(uVar6, uVar5), param_4);
//	printf("l%d\n", __LINE__);
//
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40260) + 0x30))();
//	printf("l%d\n", __LINE__);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401a8) + 0x48))();
//	printf("l%d\n", __LINE__);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40198) + 0x48))();
//	printf("l%d\n", __LINE__);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401d8) + 0x48))();
//	printf("l%d\n", __LINE__);
//	hook(0x1405bb710, *(longlong*)(param_1 + 0x401e0), param_2, CONCAT71(uVar6, uVar5));
//	printf("l%d\n", __LINE__);
//	lVar1 = hookret<long long>(0x140001af0);
//	printf("l%d\n", __LINE__);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x1401bcc50, lVar1);
//	printf("l%d\n", __LINE__);
//	(**(code**)(*plVar2 + 0x48))(plVar2);
//	lVar1 = hookret<long long>(0x1400047a0);
//	hook(0x14053de60, lVar1, 2, CONCAT71(uVar6, uVar5), param_4);
//	lVar1 = hookret<long long>(0x1400047a0);
//	hook(0x14020c7d0, lVar1, (undefined8*)&local_res8);
//	lVar1 = hookret<long long>(0x1401e0ca0);
//	hook(0x140932790, lVar1, local_res8);
//	lVar1 = hookret<long long>(0x1401e0ca0);
//	hook(0x140447110, lVar1, local_resc);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40270) + 0x48))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40208) + 0x48))();
//	hook(0x140537080, *(longlong*)(param_1 + 0x40190));
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40200) + 0x30))();
//	lVar1 = hookret<long long>(0x140001af0);
//	lVar1 = hookret<long long>(0x1409629d0, lVar1);
//	hook(0x14014f410, lVar1);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40230) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401c0) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40210) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40228) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40218) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401c0) + 0x50))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401e8) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40240) + 0x30))();
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x1401bcc50, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x14097d370, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140683730, lVar1);
//	(**(code**)(*plVar2 + 0x48))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140015690, lVar1);
//	(**(code**)(*plVar2 + 0x48))(plVar2);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401a0) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401e0) + 0x30))();
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140056130, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401a0) + 0x68))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401a0) + 0x58))();
//	hook(0x140647910, *(longlong*)(param_1 + 0x40240));
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401d8) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40208) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401b0) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401f0) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40248) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40258) + 0x30))();
//	plVar2 = (longlong*)hookret<long long*>(0x140001af0);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x1407bcd80, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140259460, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140683730, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140015690, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	lVar1 = hookret<long long, long long>(0x140056130, lVar1);
//	hook(0x140011320, lVar1);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x14013c430, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140259270, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x1408f1f10, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x14004b000, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x1407cda50, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long, long long>(0x14010a200, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401b8) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401c8) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401d0) + 0x30))();
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140703370, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x14030e6c0, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140327a10, lVar1);
//	lVar1 = *plVar2;
//	(**(code**)(lVar1 + 0x30))(plVar2);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40198) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40270) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401e0) + 0x48))();
//	hook(0x140259ea0, param_1);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40190) + 0x30))();
//	hook(0x14053a250, *(longlong*)(param_1 + 0x40190), lVar1, CONCAT71(uVar6, uVar5), param_4);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40208) + 0x50))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40270) + 0x50))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401f8) + 0x30))();
//	lVar1 = hookret<long long>(0x140001b00);
//	uVar3 = hookret<unsigned long long, long long, int, char>(0x1402b3d00, lVar1, 0xa4, '\x01');
//	lVar1 = hookret<long long>(0x140001b00);
//	uVar4 = hookret<unsigned long long, long long, int, char>(0x1402b3d00, lVar1, 0xa5, '\x01');
//	if (((char)uVar4 != '\0') || ((char)uVar3 != '\0'))
//	{
//		lVar1 = hookret<long long>(0x140001b00);
//		uVar3 = hookret<unsigned long long, long long, int, char>(0x1402b3dc0, lVar1, 0x73, '\x01');
//		if ((char)uVar3 != '\0')
//		{
//			lVar1 = hookret<long long>(0x140003150);
//			hook(0x1405213a0, lVar1);
//			return;
//		}
//	}
//	return;
//
//	POSTPHYSICS();
//};

void FUN_0x1400600b0(longlong* param_1) {
	chartick(param_1, 0x1400600b0, "Amaterasu");

};
void FUN_0x140063a90(longlong* param_1) {
	chartick(param_1, 0x140063a90, "unknown");

};
void FUN_0x140066c20(longlong* param_1) {
	chartick(param_1, 0x140066c20, "Captain America");

};
void FUN_0x140069310(longlong* param_1) {
	chartick(param_1, 0x140069310, "Chris");

};
void FUN_0x14006b7c0(longlong* param_1) {
	chartick(param_1, 0x14006b7c0, "Chun-Li");

};
void FUN_0x14006d670(longlong* param_1) {
	chartick(param_1, 0x14006d670, "Crimson Viper");

};
void FUN_0x1400700a0(longlong* param_1) {
	chartick(param_1, 0x1400700a0, "Dante");

};
void FUN_0x40074470(longlong* param_1) {
	chartick(param_1, 0x40074470, "unknown");

};
void FUN_0x140077670(longlong* param_1) {
	chartick(param_1, 0x140077670, "Dormammu");

};
void FUN_0x140079eb0(longlong* param_1) {
	chartick(param_1, 0x140079eb0, "Doctor Doom");

};
void FUN_0x14007ad00(longlong* param_1) {
	chartick(param_1, 0x14007ad00, "Dr Strange");

};
void FUN_0x14007d990(longlong* param_1) {
	chartick(param_1, 0x14007d990, "DrStrangeSh");

};

void FUN_0x400804d0(longlong* param_1) {
	chartick(param_1, 0x400804d0, "unknown");

};
void FUN_0x140081310(longlong* param_1) {
	chartick(param_1, 0x140081310, "FeliciaForC?");

};
void FUN_0x140089400(longlong* param_1) {
	chartick(param_1, 0x140089400, "Ghost Rider");

};
void FUN_0x14008c3c0(longlong* param_1) {
	chartick(param_1, 0x14008c3c0, "Akuma/Gouki");

};
void FUN_0x14008e370(longlong* param_1) {
	chartick(param_1, 0x14008e370, "Haggar");

};
void FUN_0x140090810(longlong* param_1) {
	chartick(param_1, 0x140090810, "Hawkeye");

};
void FUN_0x140092b60(longlong* param_1) {
	chartick(param_1, 0x140092b60, "Strider");

};
void FUN_0x140095b40(longlong* param_1) {
	chartick(param_1, 0x140095b40, "Hulk");

};
void FUN_0x140097740(longlong* param_1) {
	chartick(param_1, 0x140097740, "Iron Fist");

};
void FUN_0x140099e30(longlong* param_1) {
	chartick(param_1, 0x140099e30, "Iron Man");

};
void FUN_0x14009ceb0(longlong* param_1) {
	chartick(param_1, 0x14009ceb0, "Jill");

};
void FUN_0x1400a1410(longlong* param_1) {
	chartick(param_1, 0x1400a1410, "Hsien-Ko");

};
void FUN_0x1400a66e0(longlong* param_1) {
	chartick(param_1, 0x1400a66e0, "Magneto");

};
void FUN_0x1400a8830(longlong* param_1) {
	chartick(param_1, 0x1400a8830, "Maya");

};
void FUN_0x1400aaeb0(longlong* param_1) {
	chartick(param_1, 0x1400aaeb0, "Modok");

};
void FUN_0x1400ac6e0(longlong* param_1) {
	chartick(param_1, 0x1400ac6e0, "Morrigan");

};
void FUN_0x1400ae4a0(longlong* param_1) {
	chartick(param_1, 0x1400ae4a0, "MorriganSh");

};
void FUN_0x1400b5010(longlong* param_1) {
	chartick(param_1, 0x1400b5010, "Nemesis");

};
void FUN_0x1400b8a00(longlong* param_1) {
	chartick(param_1, 0x1400b8a00, "Nova");

};
void FUN_0x1400bbba0(longlong* param_1) {
	chartick(param_1, 0x1400bbba0, "Phoenix");

};
void FUN_0x1400be8f0(longlong* param_1) {
	chartick(param_1, 0x1400be8f0, "Firebrand");

};

void FUN_0x1400c84f0(longlong* param_1) {
	printf("ryu");
	chartick(param_1, 0x1400c84f0, "Ryu");

};
void FUN_0x1400ca240(longlong* param_1) {
	chartick(param_1, 0x1400ca240, "Sentinel");

};
void FUN_0x1400cd20(longlong* param_1) {
	chartick(param_1, 0x1400cd20, "unknown");

};
void FUN_0x1400cdc90(longlong* param_1) {
	chartick(param_1, 0x1400cdc90, "Shuma Gorath");

};
void FUN_0x1400d4b30(longlong* param_1) {
	chartick(param_1, 0x1400d4b30, "Spider-Man");

};
void FUN_0x1400d76d0(longlong* param_1) {
	chartick(param_1, 0x1400d76d0, "Storm");

};
void FUN_0x1400dabd0(longlong* param_1) {
	chartick(param_1, 0x1400dabd0, "Super Skrull");

};

void FUN_0x1400dd840(longlong* param_1) {
	chartick(param_1, 0x1400dd840, "Taskmaster");

};
void FUN_0x1400dff60(longlong* param_1) {
	chartick(param_1, 0x1400dff60, "Thor");

};
void FUN_0x1400e2800(longlong* param_1) {
	chartick(param_1, 0x1400e2800, "unknown");

};
void FUN_0x1400ebbb0(longlong* param_1) {
	chartick(param_1, 0x1400ebbb0, "Viewtiful Joe");

};
void FUN_0x1400edf80(longlong* param_1) {
	chartick(param_1, 0x1400edf80, "Wesker");

};
void FUN_0x1400f0d70(longlong* param_1) {
	chartick(param_1, 0x1400f0d70, "Wolverine");

};
void FUN_0x1400f2eb0(longlong* param_1) {
	chartick(param_1, 0x1400f2eb0, "X-23");

};
void FUN_0x1400f6850(longlong* param_1) {
	chartick(param_1, 0x1400f6850, "Zero");

};

void attachHooks(Trampoline* tramp, bool phys) {
	InjectHook(_addr(0x1400600bd), tramp->Jump(FUN_0x1400600b0), PATCH_CALL);
	InjectHook(_addr(0x140063a99), tramp->Jump(FUN_0x140063a90), PATCH_CALL);
	InjectHook(_addr(0x140066d35), tramp->Jump(FUN_0x140066c20), PATCH_CALL);
	InjectHook(_addr(0x140069319), tramp->Jump(FUN_0x140069310), PATCH_CALL);
	InjectHook(_addr(0x14006b7c9), tramp->Jump(FUN_0x14006b7c0), PATCH_CALL);
	InjectHook(_addr(0x14006d679), tramp->Jump(FUN_0x14006d670), PATCH_CALL);
	InjectHook(_addr(0x1400700ad), tramp->Jump(FUN_0x1400700a0), PATCH_CALL);
	InjectHook(_addr(0x14007447a), tramp->Jump(FUN_0x40074470), PATCH_CALL);
	InjectHook(_addr(0x140077701), tramp->Jump(FUN_0x140077670), PATCH_CALL);
	InjectHook(_addr(0x140079ee6), tramp->Jump(FUN_0x140079eb0), PATCH_CALL);
	InjectHook(_addr(0x14007ad0d), tramp->Jump(FUN_0x14007ad00), PATCH_CALL);
	InjectHook(_addr(0x14007da0c), tramp->Jump(FUN_0x14007d990), PATCH_CALL);
	InjectHook(_addr(0x14007da6c), tramp->Jump(FUN_0x14007d990), PATCH_CALL);
	InjectHook(_addr(0x1400804e4), tramp->Jump(FUN_0x400804d0), PATCH_CALL);
	InjectHook(_addr(0x14008131d), tramp->Jump(FUN_0x140081310), PATCH_CALL);
	InjectHook(_addr(0x140089417), tramp->Jump(FUN_0x140089400), PATCH_CALL);
	InjectHook(_addr(0x14008c3c9), tramp->Jump(FUN_0x14008c3c0), PATCH_CALL);
	InjectHook(_addr(0x14008e379), tramp->Jump(FUN_0x14008e370), PATCH_CALL);
	InjectHook(_addr(0x140090819), tramp->Jump(FUN_0x140090810), PATCH_CALL);
	InjectHook(_addr(0x140092b69), tramp->Jump(FUN_0x140092b60), PATCH_CALL);
	InjectHook(_addr(0x140095b49), tramp->Jump(FUN_0x140095b40), PATCH_CALL);
	InjectHook(_addr(0x14009774d), tramp->Jump(FUN_0x140097740), PATCH_CALL);
	InjectHook(_addr(0x140099e4a), tramp->Jump(FUN_0x140099e30), PATCH_CALL);
	InjectHook(_addr(0x14009cebe), tramp->Jump(FUN_0x14009ceb0), PATCH_CALL);
	InjectHook(_addr(0x1400a1447), tramp->Jump(FUN_0x1400a1410), PATCH_CALL);
	InjectHook(_addr(0x1400a66e9), tramp->Jump(FUN_0x1400a66e0), PATCH_CALL);
	InjectHook(_addr(0x1400a8839), tramp->Jump(FUN_0x1400a8830), PATCH_CALL);
	InjectHook(_addr(0x1400aaf78), tramp->Jump(FUN_0x1400aaeb0), PATCH_CALL);
	InjectHook(_addr(0x1400ac722), tramp->Jump(FUN_0x1400ac6e0), PATCH_CALL);
	InjectHook(_addr(0x1400ae7c7), tramp->Jump(FUN_0x1400ae4a0), PATCH_CALL);
	InjectHook(_addr(0x1400b5019), tramp->Jump(FUN_0x1400b5010), PATCH_CALL);
	InjectHook(_addr(0x1400b8a0c), tramp->Jump(FUN_0x1400b8a00), PATCH_CALL);
	InjectHook(_addr(0x1400bbc15), tramp->Jump(FUN_0x1400bbba0), PATCH_CALL);
	InjectHook(_addr(0x1400be900), tramp->Jump(FUN_0x1400be8f0), PATCH_CALL);
	InjectHook(_addr(0x1400c4c27), tramp->Jump(FUN_0x1400be8f0), PATCH_CALL);
	InjectHook(_addr(0x1400c84fc), tramp->Jump(FUN_0x1400c84f0), PATCH_CALL);
	InjectHook(_addr(0x1400ca24d), tramp->Jump(FUN_0x1400ca240), PATCH_CALL);
	InjectHook(_addr(0x1400cd23a), tramp->Jump(FUN_0x1400cd20), PATCH_CALL);
	InjectHook(_addr(0x1400cdcea), tramp->Jump(FUN_0x1400cdc90), PATCH_CALL);
	InjectHook(_addr(0x1400d1a09), tramp->Jump(FUN_0x1400d4b30), PATCH_CALL);
	InjectHook(_addr(0x1400d4b5c), tramp->Jump(FUN_0x1400d76d0), PATCH_CALL);
	InjectHook(_addr(0x1400d76de), tramp->Jump(FUN_0x1400dabd0), PATCH_CALL);
	InjectHook(_addr(0x1400dabdc), tramp->Jump(FUN_0x1400dabd0), PATCH_CALL);
	InjectHook(_addr(0x1400dd849), tramp->Jump(FUN_0x1400dd840), PATCH_CALL);
	InjectHook(_addr(0x1400dff70), tramp->Jump(FUN_0x1400dff60), PATCH_CALL);
	InjectHook(_addr(0x1400e28c9), tramp->Jump(FUN_0x1400e2800), PATCH_CALL);
	InjectHook(_addr(0x1400ebbda), tramp->Jump(FUN_0x1400ebbb0), PATCH_CALL);
	InjectHook(_addr(0x1400edf89), tramp->Jump(FUN_0x1400edf80), PATCH_CALL);
	InjectHook(_addr(0x1400f0d7d), tramp->Jump(FUN_0x1400f0d70), PATCH_CALL);
	InjectHook(_addr(0x1400f2f06), tramp->Jump(FUN_0x1400f2eb0), PATCH_CALL);
	InjectHook(_addr(0x1400f6861), tramp->Jump(FUN_0x1400f6850), PATCH_CALL);
	if (phys) {
		InjectHook(_addr(0x14001af4f), tramp->Jump(FUN_1400199c0), PATCH_CALL);
		InjectHook(_addr(0x1405b6c99), tramp->Jump(FUN_1405ab9a0), PATCH_CALL);
		InjectHook(_addr(0x1402594a9), tramp->Jump(FUN_140521df0), PATCH_CALL);
	}
};

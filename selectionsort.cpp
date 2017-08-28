void DataSwap(int*data1, int* data2) {
	int temp = *data1;
	*data1 = *data2;
	*data2 = temp;
}

void SelectionSort(int* pDataArray, int iDataNum) {
	int i, j, index;
	for(i = 0; i < iDataNum -1; i++){
		index = i;
		for(j = i + 1; j < iDataNum; j++)
			if(pDataArray[j] < pDataArray[index])
				index = j;
	}
	if(index != i) {
		DataSwap(&pDataArray[index], &pDataArray[i]);
	}

}
struct box
{int length,height,width;
	/**
	* Define three fields of type int: length, width and height
	*/
};

typedef struct box box;

int get_volume(box b) {
    return b.length*b.height*b.width;
	/**
	* Return the volume of the box
	*/
}

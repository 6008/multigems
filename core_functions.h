/*
 * core_functions.h
 *
 *  Created on: Feb 4, 2015
 *      Author: xinping
 */
#include <map>
#include <queue>
#include <array>
#include <climits>
#include "multi_seq_obj.h"

#ifndef CORE_FUNCTIONS_H_
#define CORE_FUNCTIONS_H_

#define MAX_NUM 1000000000000
#define MIN_NUM 0

typedef struct FORSIMPLE
{
	bool debug;
	int type;
	int bp;
	int mp;
	int min;
	int max;
	int thread;
	int one_circle_limit;
	int start_position;
	unsigned int max_count;
	unsigned int sample_count;
	float ratio_nchar;
	float ratio_del;
	float step;
	float eps;
	float p_snp;
	float result_filter;
	float end_condition;
} Parameters;

extern Parameters params;

using namespace std;

int printhelp();
void output_header(ofstream &out);
int Get_Name_List(const string &listname, vector<string> &infilename);
int String_Split(const string &buffer, array<string, 7> &obj, int n);
int calculate_values(double end);
int calculate_values(double end, int thread);
int new_read(ifstream &in, queue<string> &buffer, int len);
long min_last_element(vector<queue<string>> &buffer_queue);
void data_checkin(queue<string> &buffer, vector<unsigned int> &count_vector, long checkin_limit, int sample);
unsigned int position_reduce();
void output_values(ofstream &out);
void core_calculate(ifstream* ifstream_array, vector<queue<string>> &buffer_queue, ofstream &output_file);
void calculate_preprocess(const vector<string> &infilename, string &outfilename);
void test();
void constrains(string &infilename, string &outfilename);
#endif /* CORE_FUNCTIONS_H_ */

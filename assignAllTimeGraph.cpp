#include <bits/stdc++.h>
using namespace std;

// Assigning Times b/w each station:

void timeMagentaLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphTime)
{
    graphTime.push_back({m1["Janakpuri West"], m1["Dabri Mor-Janakpuri South"], 5});

    graphTime.push_back({m1["Dabri Mor-Janakpuri South"], m1["Janakpuri West"], 5});

    graphTime.push_back({m1["Dabri Mor-Janakpuri South"], m1["Dashrathpuri"], 5});

    graphTime.push_back({m1["Dashrathpuri"], m1["Dabri Mor-Janakpuri South"], 5});

    graphTime.push_back({m1["Dashrathpuri"], m1["Palam"], 2});

    graphTime.push_back({m1["Palam"], m1["Dashrathpuri"], 2});

    graphTime.push_back({m1["Palam"], m1["Sadar Bazar Cantonment"], 4});

    graphTime.push_back({m1["Sadar Bazar Cantonment"], m1["Palam"], 4});

    graphTime.push_back({m1["Sadar Bazar Cantonment"], m1["Terminal-1 IGI Airport"], 3});

    graphTime.push_back({m1["Terminal-1 IGI Airport"], m1["Sadar Bazar Cantonment"], 3});

    graphTime.push_back({m1["Terminal-1 IGI Airport"], m1["Shankar Vihar"], 3});

    graphTime.push_back({m1["Shankar Vihar"], m1["Terminal-1 IGI Airport"], 3});

    graphTime.push_back({m1["Shankar Vihar"], m1["Vasant Vihar"], 3});

    graphTime.push_back({m1["Vasant Vihar"], m1["Shankar Vihar"], 3});

    graphTime.push_back({m1["Vasant Vihar"], m1["Munirka"], 3});

    graphTime.push_back({m1["Munirka"], m1["Vasant Vihar"], 3});

    graphTime.push_back({m1["Munirka"], m1["RK Puram"], 2});

    graphTime.push_back({m1["RK Puram"], m1["Munirka"], 2});

    graphTime.push_back({m1["RK Puram"], m1["IIT Delhi"], 2});

    graphTime.push_back({m1["IIT Delhi"], m1["RK Puram"], 2});

    graphTime.push_back({m1["IIT Delhi"], m1["Hauz Khas"], 2});

    graphTime.push_back({m1["Hauz Khas"], m1["IIT Delhi"], 2});

    graphTime.push_back({m1["Hauz Khas"], m1["Panchsheel Park"], 3});

    graphTime.push_back({m1["Panchsheel Park"], m1["Hauz Khas"], 3});

    graphTime.push_back({m1["Panchsheel Park"], m1["Chirag Delhi"], 2});

    graphTime.push_back({m1["Chirag Delhi"], m1["Panchsheel Park"], 2});

    graphTime.push_back({m1["Chirag Delhi"], m1["Greater Kailash"], 2});

    graphTime.push_back({m1["Greater Kailash"], m1["Chirag Delhi"], 2});

    graphTime.push_back({m1["Greater Kailash"], m1["Nehru Enclave"], 2});

    graphTime.push_back({m1["Nehru Enclave"], m1["Greater Kailash"], 2});

    graphTime.push_back({m1["Nehru Enclave"], m1["Kalkaji Mandir"], 2});

    graphTime.push_back({m1["Kalkaji Mandir"], m1["Nehru Enclave"], 2});

    graphTime.push_back({m1["Kalkaji Mandir"], m1["Okhla NSIC"], 2});

    graphTime.push_back({m1["Okhla NSIC"], m1["Kalkaji Mandir"], 2});

    graphTime.push_back({m1["Okhla NSIC"], m1["Sukhdev Vihar"], 2});

    graphTime.push_back({m1["Sukhdev Vihar"], m1["Okhla NSIC"], 2});

    graphTime.push_back({m1["Sukhdev Vihar"], m1["Jamia Millia Islamia"], 2});

    graphTime.push_back({m1["Jamia Millia Islamia"], m1["Sukhdev Vihar"], 2});

    graphTime.push_back({m1["Jamia Millia Islamia"], m1["Okhla Vihar"], 2});

    graphTime.push_back({m1["Okhla Vihar"], m1["Jamia Millia Islamia"], 2});

    graphTime.push_back({m1["Okhla Vihar"], m1["Jasola Vihar Shaheen Bagh"], 5});

    graphTime.push_back({m1["Jasola Vihar Shaheen Bagh"], m1["Okhla Vihar"], 5});

    graphTime.push_back({m1["Jasola Vihar Shaheen Bagh"], m1["Kalindi Kunj"], 5});

    graphTime.push_back({m1["Kalindi Kunj"], m1["Jasola Vihar Shaheen Bagh"], 5});

    graphTime.push_back({m1["Kalindi Kunj"], m1["Okhla Bird Sanctuary"], 2});

    graphTime.push_back({m1["Okhla Bird Sanctuary"], m1["Kalindi Kunj"], 2});

    graphTime.push_back({m1["Okhla Bird Sanctuary"], m1["Botanical Garden"], 3});

    graphTime.push_back({m1["Botanical Garden"], m1["Okhla Bird Sanctuary"], 3});
}

void timeYellowLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphTime)
{
    graphTime.push_back({m1["Samaypur Badli"], m1["Rohini Sector-18,19"], 2});

    graphTime.push_back({m1["Rohini Sector-18,19"], m1["Samaypur Badli"], 2});

    graphTime.push_back({m1["Rohini Sector-18,19"], m1["Haiderpur Badli Mor"], 3});

    graphTime.push_back({m1["Haiderpur Badli Mor"], m1["Rohini Sector-18,19"], 3});

    graphTime.push_back({m1["Haiderpur Badli Mor"], m1["JahangirPuri"], 2});

    graphTime.push_back({m1["JahangirPuri"], m1["Haiderpur Badli Mor"], 2});

    graphTime.push_back({m1["JahangirPuri"], m1["Adarsh Nagar"], 2});

    graphTime.push_back({m1["Adarsh Nagar"], m1["JahangirPuri"], 2});

    graphTime.push_back({m1["Adarsh Nagar"], m1["Azadpur"], 2});

    graphTime.push_back({m1["Azadpur"], m1["Adarsh Nagar"], 2});

    graphTime.push_back({m1["Azadpur"], m1["Model Town"], 2});

    graphTime.push_back({m1["Model Town"], m1["Azadpur"], 2});

    graphTime.push_back({m1["Model Town"], m1["Guru Teg Bahadur Nagar"], 2});

    graphTime.push_back({m1["Guru Teg Bahadur Nagar"], m1["Model Town"], 2});

    graphTime.push_back({m1["Guru Teg Bahadur Nagar"], m1["Vishwavidyalaya"], 2});

    graphTime.push_back({m1["Vishwavidyalaya"], m1["Guru Teg Bahadur Nagar"], 2});

    graphTime.push_back({m1["Vishwavidyalaya"], m1["Vidhan Sabha"], 2});

    graphTime.push_back({m1["Vidhan Sabha"], m1["Vishwavidyalaya"], 2});

    graphTime.push_back({m1["Vidhan Sabha"], m1["Civil Lines"], 2});

    graphTime.push_back({m1["Civil Lines"], m1["Vidhan Sabha"], 2});

    graphTime.push_back({m1["Civil Lines"], m1["Kashmere Gate"], 2});

    graphTime.push_back({m1["Kashmere Gate"], m1["Civil Lines"], 2});

    graphTime.push_back({m1["Kashmere Gate"], m1["Chandni Chowk"], 2});

    graphTime.push_back({m1["Chandni Chowk"], m1["Kashmere Gate"], 2});

    graphTime.push_back({m1["Chandni Chowk"], m1["Chawri Bazar"], 2});

    graphTime.push_back({m1["Chawri Bazar"], m1["Chandni Chowk"], 2});

    graphTime.push_back({m1["Chawri Bazar"], m1["New Delhi"], 2});

    graphTime.push_back({m1["New Delhi"], m1["Chawri Bazar"], 2});

    graphTime.push_back({m1["New Delhi"], m1["Rajiv Chowk"], 2});

    graphTime.push_back({m1["Rajiv Chowk"], m1["New Delhi"], 2});

    graphTime.push_back({m1["Rajiv Chowk"], m1["Patel Chowk"], 2});

    graphTime.push_back({m1["Patel Chowk"], m1["Rajiv Chowk"], 2});

    graphTime.push_back({m1["Patel Chowk"], m1["Central Secretariat"], 2});

    graphTime.push_back({m1["Central Secretariat"], m1["Patel Chowk"], 2});

    graphTime.push_back({m1["Central Secretariat"], m1["Udyog Bhawan"], 2});

    graphTime.push_back({m1["Udyog Bhawan"], m1["Central Secretariat"], 2});

    graphTime.push_back({m1["Udyog Bhawan"], m1["Lok Kalyan Marg"], 2});

    graphTime.push_back({m1["Lok Kalyan Marg"], m1["Udyog Bhawan"], 2});

    graphTime.push_back({m1["Lok Kalyan Marg"], m1["Jor Bagh"], 2});

    graphTime.push_back({m1["Jor Bagh"], m1["Lok Kalyan Marg"], 2});

    graphTime.push_back({m1["Jor Bagh"], m1["Dilli Haat–INA"], 2});

    graphTime.push_back({m1["Dilli Haat–INA"], m1["Jor Bagh"], 2});

    graphTime.push_back({m1["Dilli Haat–INA"], m1["AIIMS"], 2});

    graphTime.push_back({m1["AIIMS"], m1["Dilli Haat–INA"], 2});

    graphTime.push_back({m1["AIIMS"], m1["Green Park"], 2});

    graphTime.push_back({m1["Green Park"], m1["AIIMS"], 2});

    graphTime.push_back({m1["Green Park"], m1["Hauz Khas"], 3});

    graphTime.push_back({m1["Hauz Khas"], m1["Green Park"], 3});

    graphTime.push_back({m1["Hauz Khas"], m1["Malviya Nagar"], 3});

    graphTime.push_back({m1["Malviya Nagar"], m1["Hauz Khas"], 3});

    graphTime.push_back({m1["Malviya Nagar"], m1["Saket"], 2});

    graphTime.push_back({m1["Saket"], m1["Malviya Nagar"], 2});

    graphTime.push_back({m1["Saket"], m1["Qutub Minar"], 3});

    graphTime.push_back({m1["Qutub Minar"], m1["Saket"], 3});

    graphTime.push_back({m1["Qutub Minar"], m1["Chhatarpur"], 3});

    graphTime.push_back({m1["Chhatarpur"], m1["Qutub Minar"], 3});

    graphTime.push_back({m1["Chhatarpur"], m1["Sultanpur"], 3});

    graphTime.push_back({m1["Sultanpur"], m1["Chhatarpur"], 3});

    graphTime.push_back({m1["Sultanpur"], m1["Ghitorni"], 2});

    graphTime.push_back({m1["Ghitorni"], m1["Sultanpur"], 2});

    graphTime.push_back({m1["Ghitorni"], m1["Arjan Garh"], 3});

    graphTime.push_back({m1["Arjan Garh"], m1["Ghitorni"], 3});

    graphTime.push_back({m1["Arjan Garh"], m1["Guru Dronacharya"], 3});

    graphTime.push_back({m1["Guru Dronacharya"], m1["Arjan Garh"], 3});

    graphTime.push_back({m1["Guru Dronacharya"], m1["Sikanderpur"], 2});

    graphTime.push_back({m1["Sikanderpur"], m1["Guru Dronacharya"], 2});

    graphTime.push_back({m1["Sikanderpur"], m1["M.G. Road"], 2});

    graphTime.push_back({m1["M.G. Road"], m1["Sikanderpur"], 2});

    graphTime.push_back({m1["M.G. Road"], m1["IFFCO Chowk"], 2});

    graphTime.push_back({m1["IFFCO Chowk"], m1["M.G. Road"], 2});

    graphTime.push_back({m1["IFFCO Chowk"], m1["Millennium City Centre Gurugram"], 2});

    graphTime.push_back({m1["Millennium City Centre Gurugram"], m1["IFFCO Chowk"], 2});
}

void timeRedLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphTime)
{
    graphTime.push_back({m1["Shaheed Sthal (New Bus Adda)"], m1["Hindon River"], 2});

    graphTime.push_back({m1["Hindon River"], m1["Shaheed Sthal (New Bus Adda)"], 2});

    graphTime.push_back({m1["Hindon River"], m1["Arthala"], 2});

    graphTime.push_back({m1["Arthala"], m1["Hindon River"], 2});

    graphTime.push_back({m1["Arthala"], m1["Mohan Nagar"], 2});

    graphTime.push_back({m1["Mohan Nagar"], m1["Arthala"], 2});

    graphTime.push_back({m1["Mohan Nagar"], m1["Shyam Park"], 2});

    graphTime.push_back({m1["Shyam Park"], m1["Mohan Nagar"], 2});

    graphTime.push_back({m1["Shyam Park"], m1["Major Mohit Sharma Rajendra Nagar"], 4});

    graphTime.push_back({m1["Major Mohit Sharma Rajendra Nagar"], m1["Shyam Park"], 4});

    graphTime.push_back({m1["Major Mohit Sharma Rajendra Nagar"], m1["Raj Bagh"], 2});

    graphTime.push_back({m1["Raj Bagh"], m1["Major Mohit Sharma Rajendra Nagar"], 2});

    graphTime.push_back({m1["Raj Bagh"], m1["Shaheed Nagar"], 2});

    graphTime.push_back({m1["Shaheed Nagar"], m1["Raj Bagh"], 2});

    graphTime.push_back({m1["Shaheed Nagar"], m1["Dilshad Garden"], 2});

    graphTime.push_back({m1["Dilshad Garden"], m1["Shaheed Nagar"], 2});

    graphTime.push_back({m1["Dilshad Garden"], m1["Jhilmil"], 2});

    graphTime.push_back({m1["Jhilmil"], m1["Dilshad Garden"], 2});

    graphTime.push_back({m1["Jhilmil"], m1["Mansarovar Park"], 2});

    graphTime.push_back({m1["Mansarovar Park"], m1["Jhilmil"], 2});

    graphTime.push_back({m1["Mansarovar Park"], m1["Shahdara"], 2});

    graphTime.push_back({m1["Shahdara"], m1["Mansarovar Park"], 2});

    graphTime.push_back({m1["Shahdara"], m1["Welcome"], 2});

    graphTime.push_back({m1["Welcome"], m1["Shahdara"], 2});

    graphTime.push_back({m1["Welcome"], m1["Seelampur"], 2});

    graphTime.push_back({m1["Seelampur"], m1["Welcome"], 2});

    graphTime.push_back({m1["Seelampur"], m1["Shastri Park"], 2});

    graphTime.push_back({m1["Shastri Park"], m1["Seelampur"], 2});

    graphTime.push_back({m1["Shastri Park"], m1["Kashmere Gate"], 3});

    graphTime.push_back({m1["Kashmere Gate"], m1["Shastri Park"], 3});

    graphTime.push_back({m1["Kashmere Gate"], m1["Tis Hazari"], 2});

    graphTime.push_back({m1["Tis Hazari"], m1["Kashmere Gate"], 2});

    graphTime.push_back({m1["Tis Hazari"], m1["Pulbangash"], 2});

    graphTime.push_back({m1["Pulbangash"], m1["Tis Hazari"], 2});

    graphTime.push_back({m1["Pulbangash"], m1["Pratap Nagar"], 2});

    graphTime.push_back({m1["Pratap Nagar"], m1["Pulbangash"], 2});

    graphTime.push_back({m1["Pratap Nagar"], m1["Shastri Nagar"], 2});

    graphTime.push_back({m1["Shastri Nagar"], m1["Pratap Nagar"], 2});

    graphTime.push_back({m1["Shastri Nagar"], m1["Inderlok"], 2});

    graphTime.push_back({m1["Inderlok"], m1["Shastri Nagar"], 2});

    graphTime.push_back({m1["Inderlok"], m1["Kanhaiya Nagar"], 2});

    graphTime.push_back({m1["Kanhaiya Nagar"], m1["Inderlok"], 2});

    graphTime.push_back({m1["Kanhaiya Nagar"], m1["Keshav Puram"], 2});

    graphTime.push_back({m1["Keshav Puram"], m1["Kanhaiya Nagar"], 2});

    graphTime.push_back({m1["Keshav Puram"], m1["Netaji Subhash Place"], 2});

    graphTime.push_back({m1["Netaji Subhash Place"], m1["Keshav Puram"], 2});

    graphTime.push_back({m1["Netaji Subhash Place"], m1["Kohat Enclave"], 2});

    graphTime.push_back({m1["Kohat Enclave"], m1["Netaji Subhash Place"], 2});

    graphTime.push_back({m1["Kohat Enclave"], m1["Pitampura"], 2});

    graphTime.push_back({m1["Pitampura"], m1["Kohat Enclave"], 2});

    graphTime.push_back({m1["Pitampura"], m1["Rohini East"], 2});

    graphTime.push_back({m1["Rohini East"], m1["Pitampura"], 2});

    graphTime.push_back({m1["Rohini East"], m1["Rohini West"], 2});

    graphTime.push_back({m1["Rohini West"], m1["Rohini East"], 2});

    graphTime.push_back({m1["Rohini West"], m1["Rithala"], 2});

    graphTime.push_back({m1["Rithala"], m1["Rohini West"], 2});
}

void timePinkLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphTime)
{
    graphTime.push_back({m1["Majlis Park"], m1["Azadpur"], 4});

    graphTime.push_back({m1["Azadpur"], m1["Majlis Park"], 4});

    graphTime.push_back({m1["Azadpur"], m1["Shalimar Bagh"], 3});

    graphTime.push_back({m1["Shalimar Bagh"], m1["Azadpur"], 3});

    graphTime.push_back({m1["Shalimar Bagh"], m1["Netaji Subhash Place"], 3});

    graphTime.push_back({m1["Netaji Subhash Place"], m1["Shalimar Bagh"], 3});

    graphTime.push_back({m1["Netaji Subhash Place"], m1["Shakurpur"], 3});

    graphTime.push_back({m1["Shakurpur"], m1["Netaji Subhash Place"], 3});

    graphTime.push_back({m1["Shakurpur"], m1["Punjabi Bagh West"], 3});

    graphTime.push_back({m1["Punjabi Bagh West"], m1["Shakurpur"], 3});

    graphTime.push_back({m1["Punjabi Bagh West"], m1["ESI-Basaidarapur"], 3});

    graphTime.push_back({m1["ESI-Basaidarapur"], m1["Punjabi Bagh West"], 3});

    graphTime.push_back({m1["ESI-Basaidarapur"], m1["Rajouri Garden"], 2});

    graphTime.push_back({m1["Rajouri Garden"], m1["ESI-Basaidarapur"], 2});

    graphTime.push_back({m1["Rajouri Garden"], m1["Mayapuri"], 3});

    graphTime.push_back({m1["Mayapuri"], m1["Rajouri Garden"], 3});

    graphTime.push_back({m1["Mayapuri"], m1["Naraina Vihar"], 3});

    graphTime.push_back({m1["Naraina Vihar"], m1["Mayapuri"], 3});

    graphTime.push_back({m1["Naraina Vihar"], m1["Delhi Cantt"], 3});

    graphTime.push_back({m1["Delhi Cantt"], m1["Naraina Vihar"], 3});

    graphTime.push_back({m1["Delhi Cantt"], m1["Durgabai Deshmukh South Campus"], 5});

    graphTime.push_back({m1["Durgabai Deshmukh South Campus"], m1["Delhi Cantt"], 5});

    graphTime.push_back({m1["Durgabai Deshmukh South Campus"], m1["Sir M.Vishweshwaraiah Moti Bagh"], 3});

    graphTime.push_back({m1["Sir M.Vishweshwaraiah Moti Bagh"], m1["Durgabai Deshmukh South Campus"], 3});

    graphTime.push_back({m1["Sir M.Vishweshwaraiah Moti Bagh"], m1["Bhikaji Cama Place"], 3});

    graphTime.push_back({m1["Bhikaji Cama Place"], m1["Sir M.Vishweshwaraiah Moti Bagh"], 3});

    graphTime.push_back({m1["Bhikaji Cama Place"], m1["Sarojini Nagar"], 2});

    graphTime.push_back({m1["Sarojini Nagar"], m1["Bhikaji Cama Place"], 2});

    graphTime.push_back({m1["Sarojini Nagar"], m1["Dilli Haat-INA"], 2});

    graphTime.push_back({m1["Dilli Haat-INA"], m1["Sarojini Nagar"], 2});

    graphTime.push_back({m1["Dilli Haat-INA"], m1["South Extension"], 2});

    graphTime.push_back({m1["South Extension"], m1["Dilli Haat-INA"], 2});

    graphTime.push_back({m1["South Extension"], m1["Lajpat Nagar"], 3});

    graphTime.push_back({m1["Lajpat Nagar"], m1["South Extension"], 3});

    graphTime.push_back({m1["Lajpat Nagar"], m1["Vinobapuri"], 3});

    graphTime.push_back({m1["Vinobapuri"], m1["Lajpat Nagar"], 3});

    graphTime.push_back({m1["Vinobapuri"], m1["Ashram"], 3});

    graphTime.push_back({m1["Ashram"], m1["Vinobapuri"], 3});

    graphTime.push_back({m1["Ashram"], m1["Sarai Kale Khan Nizamuddin"], 3});

    graphTime.push_back({m1["Sarai Kale Khan Nizamuddin"], m1["Ashram"], 3});

    graphTime.push_back({m1["Sarai Kale Khan Nizamuddin"], m1["Mayur Vihar-1"], 5});

    graphTime.push_back({m1["Mayur Vihar-1"], m1["Sarai Kale Khan Nizamuddin"], 5});

    graphTime.push_back({m1["Mayur Vihar-1"], m1["Mayur Vihar Pocket-1"], 2});

    graphTime.push_back({m1["Mayur Vihar Pocket-1"], m1["Mayur Vihar-1"], 2});

    graphTime.push_back({m1["Mayur Vihar Pocket-1"], m1["Trilokpuri-Sanjay Lake"], 6});

    graphTime.push_back({m1["Trilokpuri-Sanjay Lake"], m1["Mayur Vihar Pocket-1"], 6});

    graphTime.push_back({m1["Trilokpuri-Sanjay Lake"], m1["East Vinod Nagar-Mayur Vihar-II"], 2});

    graphTime.push_back({m1["East Vinod Nagar-Mayur Vihar-II"], m1["Trilokpuri-Sanjay Lake"], 2});

    graphTime.push_back({m1["East Vinod Nagar-Mayur Vihar-II"], m1["Mandawali West Vinod Nagar"], 2});

    graphTime.push_back({m1["Mandawali West Vinod Nagar"], m1["East Vinod Nagar-Mayur Vihar-II"], 2});

    graphTime.push_back({m1["Mandawali West Vinod Nagar"], m1["IP Extension"], 3});

    graphTime.push_back({m1["IP Extension"], m1["Mandawali West Vinod Nagar"], 3});

    graphTime.push_back({m1["IP Extension"], m1["Anand Vihar I.S.B.T."], 4});

    graphTime.push_back({m1["Anand Vihar I.S.B.T."], m1["IP Extension"], 4});

    graphTime.push_back({m1["Anand Vihar I.S.B.T."], m1["Karkarduma"], 2});

    graphTime.push_back({m1["Karkarduma"], m1["Anand Vihar I.S.B.T."], 2});

    graphTime.push_back({m1["Karkarduma"], m1["Karkarduma Court"], 2});

    graphTime.push_back({m1["Karkarduma Court"], m1["Karkarduma"], 2});

    graphTime.push_back({m1["Karkarduma Court"], m1["Krishna Nagar"], 2});

    graphTime.push_back({m1["Krishna Nagar"], m1["Karkarduma Court"], 2});

    graphTime.push_back({m1["Krishna Nagar"], m1["East Azad Nagar"], 2});

    graphTime.push_back({m1["East Azad Nagar"], m1["Krishna Nagar"], 2});

    graphTime.push_back({m1["East Azad Nagar"], m1["Welcome"], 2});

    graphTime.push_back({m1["Welcome"], m1["East Azad Nagar"], 2});

    graphTime.push_back({m1["Welcome"], m1["Jafrabad"], 3});

    graphTime.push_back({m1["Jafrabad"], m1["Welcome"], 3});

    graphTime.push_back({m1["Jafrabad"], m1["Maujpur-Babarpur"], 2});

    graphTime.push_back({m1["Maujpur-Babarpur"], m1["Jafrabad"], 2});

    graphTime.push_back({m1["Maujpur-Babarpur"], m1["Gokulpuri"], 2});

    graphTime.push_back({m1["Gokulpuri"], m1["Maujpur-Babarpur"], 2});

    graphTime.push_back({m1["Gokulpuri"], m1["Johri Enclave"], 2});

    graphTime.push_back({m1["Johri Enclave"], m1["Gokulpuri"], 2});

    graphTime.push_back({m1["Johri Enclave"], m1["Shiv Vihar"], 2});

    graphTime.push_back({m1["Shiv Vihar"], m1["Johri Enclave"], 2});
}

void timeGreenLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphTime)
{
    graphTime.push_back({m1["Kirti Nagar"], m1["Satguru Ram Singh Marg"], 2});

    graphTime.push_back({m1["Satguru Ram Singh Marg"], m1["Kirti Nagar"], 2});

    graphTime.push_back({m1["Satguru Ram Singh Marg"], m1["Inderlok"], 11});

    graphTime.push_back({m1["Inderlok"], m1["Satguru Ram Singh Marg"], 11});

    graphTime.push_back({m1["Inderlok"], m1["Ashok Park Main"], 3});

    graphTime.push_back({m1["Ashok Park Main"], m1["Inderlok"], 3});

    graphTime.push_back({m1["Ashok Park Main"], m1["Punjabi Bagh"], 2});

    graphTime.push_back({m1["Punjabi Bagh"], m1["Ashok Park Main"], 2});

    graphTime.push_back({m1["Punjabi Bagh"], m1["Punjabi Bagh West"], 2});

    graphTime.push_back({m1["Punjabi Bagh West"], m1["Punjabi Bagh"], 2});

    graphTime.push_back({m1["Punjabi Bagh West"], m1["Shivaji Park"], 2});

    graphTime.push_back({m1["Shivaji Park"], m1["Punjabi Bagh West"], 2});

    graphTime.push_back({m1["Shivaji Park"], m1["Madipur"], 2});

    graphTime.push_back({m1["Madipur"], m1["Shivaji Park"], 2});

    graphTime.push_back({m1["Madipur"], m1["Paschim Vihar East"], 2});

    graphTime.push_back({m1["Paschim Vihar East"], m1["Madipur"], 2});

    graphTime.push_back({m1["Paschim Vihar East"], m1["Paschim Vihar West"], 2});

    graphTime.push_back({m1["Paschim Vihar West"], m1["Paschim Vihar East"], 2});

    graphTime.push_back({m1["Paschim Vihar West"], m1["Peeragarhi"], 2});

    graphTime.push_back({m1["Peeragarhi"], m1["Paschim Vihar West"], 2});

    graphTime.push_back({m1["Peeragarhi"], m1["Udyog Nagar"], 2});

    graphTime.push_back({m1["Udyog Nagar"], m1["Peeragarhi"], 2});

    graphTime.push_back({m1["Udyog Nagar"], m1["Maharaja Surajmal Stadium"], 2});

    graphTime.push_back({m1["Maharaja Surajmal Stadium"], m1["Udyog Nagar"], 2});

    graphTime.push_back({m1["Maharaja Surajmal Stadium"], m1["Nangloi"], 2});

    graphTime.push_back({m1["Nangloi"], m1["Maharaja Surajmal Stadium"], 2});

    graphTime.push_back({m1["Nangloi"], m1["Nangloi Railway Station"], 2});

    graphTime.push_back({m1["Nangloi Railway Station"], m1["Nangloi"], 2});

    graphTime.push_back({m1["Nangloi Railway Station"], m1["Rajdhani Park"], 2});

    graphTime.push_back({m1["Rajdhani Park"], m1["Nangloi Railway Station"], 2});

    graphTime.push_back({m1["Rajdhani Park"], m1["Mundka"], 2});

    graphTime.push_back({m1["Mundka"], m1["Rajdhani Park"], 2});

    graphTime.push_back({m1["Mundka"], m1["Mundka Industrial Area (MIA)"], 2});

    graphTime.push_back({m1["Mundka Industrial Area (MIA)"], m1["Mundka"], 2});

    graphTime.push_back({m1["Mundka Industrial Area (MIA)"], m1["Ghevra Metro Station"], 3});

    graphTime.push_back({m1["Ghevra Metro Station"], m1["Mundka Industrial Area (MIA)"], 3});

    graphTime.push_back({m1["Ghevra Metro Station"], m1["Tikri Kalan"], 3});

    graphTime.push_back({m1["Tikri Kalan"], m1["Ghevra Metro Station"], 3});

    graphTime.push_back({m1["Tikri Kalan"], m1["Tikri Border"], 2});

    graphTime.push_back({m1["Tikri Border"], m1["Tikri Kalan"], 2});

    graphTime.push_back({m1["Tikri Border"], m1["Pandit Shree Ram Sharma"], 2});

    graphTime.push_back({m1["Pandit Shree Ram Sharma"], m1["Tikri Border"], 2});

    graphTime.push_back({m1["Pandit Shree Ram Sharma"], m1["Bahadurgarh City"], 2});

    graphTime.push_back({m1["Bahadurgarh City"], m1["Pandit Shree Ram Sharma"], 2});

    graphTime.push_back({m1["Bahadurgarh City"], m1["Brig. Hoshiar Singh"], 3});

    graphTime.push_back({m1["Brig. Hoshiar Singh"], m1["Bahadurgarh City"], 3});
}

void timeVioletLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphTime)
{
    graphTime.push_back({m1["Kashmere Gate"], m1["Lal Quila"], 1});

    graphTime.push_back({m1["Lal Quila"], m1["Kashmere Gate"], 1});

    graphTime.push_back({m1["Lal Quila"], m1["Jama Masjid"], 1});

    graphTime.push_back({m1["Jama Masjid"], m1["Lal Quila"], 1});

    graphTime.push_back({m1["Jama Masjid"], m1["Delhi Gate"], 1});

    graphTime.push_back({m1["Delhi Gate"], m1["Jama Masjid"], 1});

    graphTime.push_back({m1["Delhi Gate"], m1["ITO"], 1});

    graphTime.push_back({m1["ITO"], m1["Delhi Gate"], 1});

    graphTime.push_back({m1["ITO"], m1["Mandi House"], 1});

    graphTime.push_back({m1["Mandi House"], m1["ITO"], 1});

    graphTime.push_back({m1["Mandi House"], m1["Janpath"], 1});

    graphTime.push_back({m1["Janpath"], m1["Mandi House"], 1});

    graphTime.push_back({m1["Janpath"], m1["Central Secretariat"], 1});

    graphTime.push_back({m1["Central Secretariat"], m1["Janpath"], 1});

    graphTime.push_back({m1["Central Secretariat"], m1["Khan Market"], 1});

    graphTime.push_back({m1["Khan Market"], m1["Central Secretariat"], 1});

    graphTime.push_back({m1["Khan Market"], m1["JLN Stadium"], 1});

    graphTime.push_back({m1["JLN Stadium"], m1["Khan Market"], 1});

    graphTime.push_back({m1["JLN Stadium"], m1["Jangpura"], 1});

    graphTime.push_back({m1["Jangpura"], m1["JLN Stadium"], 1});

    graphTime.push_back({m1["Jangpura"], m1["Lajpat Nagar"], 1});

    graphTime.push_back({m1["Lajpat Nagar"], m1["Jangpura"], 1});

    graphTime.push_back({m1["Lajpat Nagar"], m1["Moolchand"], 1});

    graphTime.push_back({m1["Moolchand"], m1["Lajpat Nagar"], 1});

    graphTime.push_back({m1["Moolchand"], m1["Kailash Colony"], 1});

    graphTime.push_back({m1["Kailash Colony"], m1["Moolchand"], 1});

    graphTime.push_back({m1["Kailash Colony"], m1["Nehru Place"], 1});

    graphTime.push_back({m1["Nehru Place"], m1["Kailash Colony"], 1});

    graphTime.push_back({m1["Nehru Place"], m1["Kalkaji Mandir"], 1});

    graphTime.push_back({m1["Kalkaji Mandir"], m1["Nehru Place"], 1});

    graphTime.push_back({m1["Kalkaji Mandir"], m1["Govind Puri"], 1});

    graphTime.push_back({m1["Govind Puri"], m1["Kalkaji Mandir"], 1});

    graphTime.push_back({m1["Govind Puri"], m1["Harkesh Nagar Okhla"], 1});

    graphTime.push_back({m1["Harkesh Nagar Okhla"], m1["Govind Puri"], 1});

    graphTime.push_back({m1["Harkesh Nagar Okhla"], m1["Jasola Apollo"], 1});

    graphTime.push_back({m1["Jasola Apollo"], m1["Harkesh Nagar Okhla"], 1});

    graphTime.push_back({m1["Jasola Apollo"], m1["Sarita Vihar"], 1});

    graphTime.push_back({m1["Sarita Vihar"], m1["Jasola Apollo"], 1});

    graphTime.push_back({m1["Sarita Vihar"], m1["Mohan Estate"], 1});

    graphTime.push_back({m1["Mohan Estate"], m1["Sarita Vihar"], 1});

    graphTime.push_back({m1["Mohan Estate"], m1["Tughlakabad Station"], 1});

    graphTime.push_back({m1["Tughlakabad Station"], m1["Mohan Estate"], 1});

    graphTime.push_back({m1["Tughlakabad Station"], m1["Badarpur Border"], 1});

    graphTime.push_back({m1["Badarpur Border"], m1["Tughlakabad Station"], 1});

    graphTime.push_back({m1["Badarpur Border"], m1["Sarai"], 1});

    graphTime.push_back({m1["Sarai"], m1["Badarpur Border"], 1});

    graphTime.push_back({m1["Sarai"], m1["NHPC Chowk"], 1});

    graphTime.push_back({m1["NHPC Chowk"], m1["Sarai"], 1});

    graphTime.push_back({m1["NHPC Chowk"], m1["Mewala Maharajpur"], 1});

    graphTime.push_back({m1["Mewala Maharajpur"], m1["NHPC Chowk"], 1});

    graphTime.push_back({m1["Mewala Maharajpur"], m1["Sector-28"], 1});

    graphTime.push_back({m1["Sector-28"], m1["Mewala Maharajpur"], 1});

    graphTime.push_back({m1["Sector-28"], m1["Badkal Mor"], 1});

    graphTime.push_back({m1["Badkal Mor"], m1["Sector-28"], 1});

    graphTime.push_back({m1["Badkal Mor"], m1["Old Faridabad"], 1});

    graphTime.push_back({m1["Old Faridabad"], m1["Badkal Mor"], 1});

    graphTime.push_back({m1["Old Faridabad"], m1["Neelam Chowk Ajronda"], 1});

    graphTime.push_back({m1["Neelam Chowk Ajronda"], m1["Old Faridabad"], 1});

    graphTime.push_back({m1["Neelam Chowk Ajronda"], m1["Bata Chowk"], 1});

    graphTime.push_back({m1["Bata Chowk"], m1["Neelam Chowk Ajronda"], 1});

    graphTime.push_back({m1["Bata Chowk"], m1["Escorts Mujesar"], 1});

    graphTime.push_back({m1["Escorts Mujesar"], m1["Bata Chowk"], 1});

    graphTime.push_back({m1["Escorts Mujesar"], m1["Sant Surdas (Sihi)"], 1});

    graphTime.push_back({m1["Sant Surdas (Sihi)"], m1["Escorts Mujesar"], 1});

    graphTime.push_back({m1["Sant Surdas (Sihi)"], m1["Raja Nahar Singh (Ballabhgarh)"], 1});

    graphTime.push_back({m1["Raja Nahar Singh (Ballabhgarh)"], m1["Sant Surdas (Sihi)"], 1});
}

void timeBlueLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphTime)
{
    graphTime.push_back({m1["Noida Electronic City"], m1["Sec-62 Noida"], 1});

    graphTime.push_back({m1["Sec-62 Noida"], m1["Noida Electronic City"], 1});

    graphTime.push_back({m1["Sec-62 Noida"], m1["Sec-59 Noida"], 1});

    graphTime.push_back({m1["Sec-59 Noida"], m1["Sec-62 Noida"], 1});

    graphTime.push_back({m1["Sec-59 Noida"], m1["Sec-61 Noida"], 1});

    graphTime.push_back({m1["Sec-61 Noida"], m1["Sec-59 Noida"], 1});

    graphTime.push_back({m1["Sec-61 Noida"], m1["Sec-52 Noida"], 1});

    graphTime.push_back({m1["Sec-52 Noida"], m1["Sec-61 Noida"], 1});

    graphTime.push_back({m1["Sec-52 Noida"], m1["Sec-34 Noida"], 1});

    graphTime.push_back({m1["Sec-34 Noida"], m1["Sec-52 Noida"], 1});

    graphTime.push_back({m1["Sec-34 Noida"], m1["Noida City Centre"], 1});

    graphTime.push_back({m1["Noida City Centre"], m1["Sec-34 Noida"], 1});

    graphTime.push_back({m1["Noida City Centre"], m1["Golf Course"], 1});

    graphTime.push_back({m1["Golf Course"], m1["Noida City Centre"], 1});

    graphTime.push_back({m1["Golf Course"], m1["Botanical Garden"], 1});

    graphTime.push_back({m1["Botanical Garden"], m1["Golf Course"], 1});

    graphTime.push_back({m1["Botanical Garden"], m1["Noida Sec-18"], 1});

    graphTime.push_back({m1["Noida Sec-18"], m1["Botanical Garden"], 1});

    graphTime.push_back({m1["Noida Sec-18"], m1["Noida Sec-16"], 1});

    graphTime.push_back({m1["Noida Sec-16"], m1["Noida Sec-18"], 1});

    graphTime.push_back({m1["Noida Sec-16"], m1["Noida Sec-15"], 1});

    graphTime.push_back({m1["Noida Sec-15"], m1["Noida Sec-16"], 1});

    graphTime.push_back({m1["Noida Sec-15"], m1["New Ashok Nagar"], 1});

    graphTime.push_back({m1["New Ashok Nagar"], m1["Noida Sec-15"], 1});

    graphTime.push_back({m1["New Ashok Nagar"], m1["Mayur Vihar Extension"], 1});

    graphTime.push_back({m1["Mayur Vihar Extension"], m1["New Ashok Nagar"], 1});

    graphTime.push_back({m1["Mayur Vihar Extension"], m1["Mayur Vihar-1"], 1});

    graphTime.push_back({m1["Mayur Vihar-1"], m1["Mayur Vihar Extension"], 1});

    graphTime.push_back({m1["Mayur Vihar-1"], m1["Akshardham"], 1});

    graphTime.push_back({m1["Akshardham"], m1["Mayur Vihar-1"], 1});

    graphTime.push_back({m1["Akshardham"], m1["Yamuna Bank"], 1});

    graphTime.push_back({m1["Yamuna Bank"], m1["Akshardham"], 1});

    graphTime.push_back({m1["Yamuna Bank"], m1["Indraprastha"], 1});

    graphTime.push_back({m1["Indraprastha"], m1["Yamuna Bank"], 1});

    graphTime.push_back({m1["Indraprastha"], m1["Supreme Court"], 1});

    graphTime.push_back({m1["Supreme Court"], m1["Indraprastha"], 1});

    graphTime.push_back({m1["Supreme Court"], m1["Mandi House"], 1});

    graphTime.push_back({m1["Mandi House"], m1["Supreme Court"], 1});

    graphTime.push_back({m1["Mandi House"], m1["Barakhamba Road"], 1});

    graphTime.push_back({m1["Barakhamba Road"], m1["Mandi House"], 1});

    graphTime.push_back({m1["Barakhamba Road"], m1["Rajiv Chowk"], 1});

    graphTime.push_back({m1["Rajiv Chowk"], m1["Barakhamba Road"], 1});

    graphTime.push_back({m1["Rajiv Chowk"], m1["Ramakrishna Ashram Marg"], 1});

    graphTime.push_back({m1["Ramakrishna Ashram Marg"], m1["Rajiv Chowk"], 1});

    graphTime.push_back({m1["Ramakrishna Ashram Marg"], m1["Jhandewalan"], 1});

    graphTime.push_back({m1["Jhandewalan"], m1["Ramakrishna Ashram Marg"], 1});

    graphTime.push_back({m1["Jhandewalan"], m1["Karol Bagh"], 1});

    graphTime.push_back({m1["Karol Bagh"], m1["Jhandewalan"], 1});

    graphTime.push_back({m1["Karol Bagh"], m1["Rajendra Place"], 1});

    graphTime.push_back({m1["Rajendra Place"], m1["Karol Bagh"], 1});

    graphTime.push_back({m1["Rajendra Place"], m1["Patel Nagar"], 1});

    graphTime.push_back({m1["Patel Nagar"], m1["Rajendra Place"], 1});

    graphTime.push_back({m1["Patel Nagar"], m1["Shadipur"], 1});

    graphTime.push_back({m1["Shadipur"], m1["Patel Nagar"], 1});

    graphTime.push_back({m1["Shadipur"], m1["Kirti Nagar"], 1});

    graphTime.push_back({m1["Kirti Nagar"], m1["Shadipur"], 1});

    graphTime.push_back({m1["Kirti Nagar"], m1["Moti Nagar"], 1});

    graphTime.push_back({m1["Moti Nagar"], m1["Kirti Nagar"], 1});

    graphTime.push_back({m1["Moti Nagar"], m1["Ramesh Nagar"], 1});

    graphTime.push_back({m1["Ramesh Nagar"], m1["Moti Nagar"], 1});

    graphTime.push_back({m1["Ramesh Nagar"], m1["Rajouri Garden"], 1});

    graphTime.push_back({m1["Rajouri Garden"], m1["Ramesh Nagar"], 1});

    graphTime.push_back({m1["Rajouri Garden"], m1["Tagore Garden"], 1});

    graphTime.push_back({m1["Tagore Garden"], m1["Rajouri Garden"], 1});

    graphTime.push_back({m1["Tagore Garden"], m1["Subhash Nagar"], 1});

    graphTime.push_back({m1["Subhash Nagar"], m1["Tagore Garden"], 1});

    graphTime.push_back({m1["Subhash Nagar"], m1["Tilak Nagar"], 1});

    graphTime.push_back({m1["Tilak Nagar"], m1["Subhash Nagar"], 1});

    graphTime.push_back({m1["Tilak Nagar"], m1["Janakpuri East"], 1});

    graphTime.push_back({m1["Janakpuri East"], m1["Tilak Nagar"], 1});

    graphTime.push_back({m1["Janakpuri East"], m1["Janakpuri West"], 1});

    graphTime.push_back({m1["Janakpuri West"], m1["Janakpuri East"], 1});

    graphTime.push_back({m1["Janakpuri West"], m1["Uttam Nagar East"], 1});

    graphTime.push_back({m1["Uttam Nagar East"], m1["Janakpuri West"], 1});

    graphTime.push_back({m1["Uttam Nagar East"], m1["Uttam Nagar West"], 1});

    graphTime.push_back({m1["Uttam Nagar West"], m1["Uttam Nagar East"], 1});

    graphTime.push_back({m1["Uttam Nagar West"], m1["Nawada"], 1});

    graphTime.push_back({m1["Nawada"], m1["Uttam Nagar West"], 1});

    graphTime.push_back({m1["Nawada"], m1["Dwarka Mor"], 1});

    graphTime.push_back({m1["Dwarka Mor"], m1["Nawada"], 1});

    graphTime.push_back({m1["Dwarka Mor"], m1["Dwarka"], 1});

    graphTime.push_back({m1["Dwarka"], m1["Dwarka Mor"], 1});

    graphTime.push_back({m1["Dwarka"], m1["Dwarka Sector-14"], 1});

    graphTime.push_back({m1["Dwarka Sector-14"], m1["Dwarka"], 1});

    graphTime.push_back({m1["Dwarka Sector-14"], m1["Dwarka Sector-13"], 1});

    graphTime.push_back({m1["Dwarka Sector-13"], m1["Dwarka Sector-14"], 1});

    graphTime.push_back({m1["Dwarka Sector-13"], m1["Dwarka Sector-12"], 1});

    graphTime.push_back({m1["Dwarka Sector-12"], m1["Dwarka Sector-13"], 1});

    graphTime.push_back({m1["Dwarka Sector-12"], m1["Dwarka Sector-11"], 1});

    graphTime.push_back({m1["Dwarka Sector-11"], m1["Dwarka Sector-12"], 1});

    graphTime.push_back({m1["Dwarka Sector-11"], m1["Dwarka Sector-10"], 1});

    graphTime.push_back({m1["Dwarka Sector-10"], m1["Dwarka Sector-11"], 1});

    graphTime.push_back({m1["Dwarka Sector-10"], m1["Dwarka Sector-9"], 1});

    graphTime.push_back({m1["Dwarka Sector-9"], m1["Dwarka Sector-10"], 1});

    graphTime.push_back({m1["Dwarka Sector-9"], m1["Dwarka Sector-8"], 1});

    graphTime.push_back({m1["Dwarka Sector-8"], m1["Dwarka Sector-9"], 1});

    graphTime.push_back({m1["Dwarka Sector-8"], m1["Dwarka Sector-21"], 1});

    graphTime.push_back({m1["Dwarka Sector-21"], m1["Dwarka Sector-8"], 1});
}

void timeBlueLineBranch(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphTime)
{
    graphTime.push_back({m1["Yamuna Bank"], m1["Laxmi Nagar"], 1});

    graphTime.push_back({m1["Laxmi Nagar"], m1["Yamuna Bank"], 1});

    graphTime.push_back({m1["Laxmi Nagar"], m1["Nirman Vihar"], 1});

    graphTime.push_back({m1["Nirman Vihar"], m1["Laxmi Nagar"], 1});

    graphTime.push_back({m1["Nirman Vihar"], m1["Preet Vihar"], 1});

    graphTime.push_back({m1["Preet Vihar"], m1["Nirman Vihar"], 1});

    graphTime.push_back({m1["Preet Vihar"], m1["Karkarduma"], 1});

    graphTime.push_back({m1["Karkarduma"], m1["Preet Vihar"], 1});

    graphTime.push_back({m1["Karkarduma"], m1["Anand Vihar I.S.B.T."], 1});

    graphTime.push_back({m1["Anand Vihar I.S.B.T."], m1["Karkarduma"], 1});

    graphTime.push_back({m1["Anand Vihar I.S.B.T."], m1["Kaushambi"], 1});

    graphTime.push_back({m1["Kaushambi"], m1["Anand Vihar I.S.B.T."], 1});

    graphTime.push_back({m1["Kaushambi"], m1["Vaishali"], 1});

    graphTime.push_back({m1["Vaishali"], m1["Kaushambi"], 1});
}

void assignAllTimeGraph(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphTime)
{
    timeMagentaLine(m1, m2, graphTime);
    timeYellowLine(m1, m2, graphTime);
    timeRedLine(m1, m2, graphTime);
    timePinkLine(m1, m2, graphTime);
    timeGreenLine(m1, m2, graphTime);
    timeVioletLine(m1, m2, graphTime);
    timeBlueLine(m1, m2, graphTime);
    timeBlueLineBranch(m1, m2, graphTime);
}
